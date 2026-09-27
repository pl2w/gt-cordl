#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_ProjectileSource_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomSystem)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class FXSystemSettings;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
class IFXContext;
}
namespace GlobalNamespace {
class NetEventOptions;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
struct PlayerEffect;
}
namespace GlobalNamespace {
class RoomSystemEffect;
}
namespace GlobalNamespace {
class RoomSystemSettings;
}
namespace GlobalNamespace {
struct RoomSystem_Events;
}
namespace GlobalNamespace {
class RoomSystem_ImpactFxContainer;
}
namespace GlobalNamespace {
class RoomSystem_LaunchProjectileContainer;
}
namespace GlobalNamespace {
struct RoomSystem_LavaSyncEventData;
}
namespace GlobalNamespace {
struct RoomSystem_PlayerEffectConfig;
}
namespace GlobalNamespace {
struct RoomSystem_ProjectileSource;
}
namespace GlobalNamespace {
struct RoomSystem_SoundEffect;
}
namespace GlobalNamespace {
struct RoomSystem_StatusEffects;
}
namespace GlobalNamespace {
class SnowballThrowable;
}
namespace GlobalNamespace {
template<typename T>
class StaticArrayBag_1;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaNetworking {
class GorillaNetworkJoinTrigger;
}
namespace GorillaTag {
template<typename T>
class DelegateListProcessor_1;
}
namespace GorillaTag {
class DelegateListProcessor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Timers {
class ElapsedEventArgs;
}
namespace System::Timers {
class Timer;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomSystem;
}
namespace GlobalNamespace {
class RoomSystem_ImpactFxContainer;
}
namespace GlobalNamespace {
class RoomSystem_LaunchProjectileContainer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomSystem*);
MARK_REF_T(::GlobalNamespace::RoomSystem_ImpactFxContainer*);
MARK_REF_T(::GlobalNamespace::RoomSystem_LaunchProjectileContainer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystem*, "", "RoomSystem");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystem_ImpactFxContainer*, "", "RoomSystem/ImpactFxContainer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomSystem_LaunchProjectileContainer*, "", "RoomSystem/LaunchProjectileContainer");
// Dependencies Photon.Pun.PhotonView, System.Object, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomSystem
class CORDL_TYPE RoomSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Events = ::GlobalNamespace::RoomSystem_Events;

using ImpactFxContainer = ::GlobalNamespace::RoomSystem_ImpactFxContainer;

using LaunchProjectileContainer = ::GlobalNamespace::RoomSystem_LaunchProjectileContainer;

using LavaSyncEventData = ::GlobalNamespace::RoomSystem_LavaSyncEventData;

using PlayerEffectConfig = ::GlobalNamespace::RoomSystem_PlayerEffectConfig;

using ProjectileSource = ::GlobalNamespace::RoomSystem_ProjectileSource;

using SoundEffect = ::GlobalNamespace::RoomSystem_SoundEffect;

using StatusEffects = ::GlobalNamespace::RoomSystem_StatusEffects;

/// @brief Field JoinedRoomEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_JoinedRoomEvent, put=setStaticF_JoinedRoomEvent)) ::GorillaTag::DelegateListProcessor*  JoinedRoomEvent;

/// @brief Field LeftRoomEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LeftRoomEvent, put=setStaticF_LeftRoomEvent)) ::GorillaTag::DelegateListProcessor*  LeftRoomEvent;

/// @brief Field OnLavaSyncReceived, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLavaSyncReceived, put=setStaticF_OnLavaSyncReceived)) ::System::Action_1<::GlobalNamespace::RoomSystem_LavaSyncEventData>*  OnLavaSyncReceived;

/// @brief Field OnMonkePointsRedeemedReceived, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnMonkePointsRedeemedReceived, put=setStaticF_OnMonkePointsRedeemedReceived)) ::System::Action_2<::GlobalNamespace::NetPlayer*,int32_t>*  OnMonkePointsRedeemedReceived;

/// @brief Field PlayerJoinedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PlayerJoinedEvent, put=setStaticF_PlayerJoinedEvent)) ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  PlayerJoinedEvent;

/// @brief Field PlayerLeftEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PlayerLeftEvent, put=setStaticF_PlayerLeftEvent)) ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  PlayerLeftEvent;

/// @brief Field PlayersChangedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PlayersChangedEvent, put=setStaticF_PlayersChangedEvent)) ::GorillaTag::DelegateListProcessor*  PlayersChangedEvent;

/// @brief Field <InitialJoinTrigger>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__InitialJoinTrigger_k__BackingField, put=setStaticF__InitialJoinTrigger_k__BackingField)) ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  _InitialJoinTrigger_k__BackingField;

/// @brief Field <IsVStumpRoom>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsVStumpRoom_k__BackingField, put=setStaticF__IsVStumpRoom_k__BackingField)) bool  _IsVStumpRoom_k__BackingField;

/// @brief Field <RoomSizeOverride>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__RoomSizeOverride_k__BackingField, put=setStaticF__RoomSizeOverride_k__BackingField)) uint8_t  _RoomSizeOverride_k__BackingField;

/// @brief Field <RoomSizeReduction>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__RoomSizeReduction_k__BackingField, put=setStaticF__RoomSizeReduction_k__BackingField)) uint8_t  _RoomSizeReduction_k__BackingField;

/// @brief Field <UseRoomSizeOverride>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__UseRoomSizeOverride_k__BackingField, put=setStaticF__UseRoomSizeOverride_k__BackingField)) bool  _UseRoomSizeOverride_k__BackingField;

/// @brief Field <WasRoomPrivate>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__WasRoomPrivate_k__BackingField, put=setStaticF__WasRoomPrivate_k__BackingField)) bool  _WasRoomPrivate_k__BackingField;

/// @brief Field <WasRoomSubscription>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__WasRoomSubscription_k__BackingField, put=setStaticF__WasRoomSubscription_k__BackingField)) bool  _WasRoomSubscription_k__BackingField;

/// @brief Field __roomSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___roomSettings, put=setStaticF___roomSettings)) ::UnityW<::GlobalNamespace::RoomSystemSettings>  __roomSettings;

/// @brief Field callbackInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_callbackInstance, put=setStaticF_callbackInstance)) ::UnityW<::GlobalNamespace::RoomSystem>  callbackInstance;

/// @brief Field disconnectTimer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_disconnectTimer, put=setStaticF_disconnectTimer)) ::System::Timers::Timer*  disconnectTimer;

/// @brief Field groupJoinSendData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_groupJoinSendData, put=setStaticF_groupJoinSendData)) ::ArrayW<::System::Object*>  groupJoinSendData;

/// @brief Field hashValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hashValues, put=setStaticF_hashValues)) ::System::Collections::Generic::List_1<int32_t>*  hashValues;

/// @brief Field hitPlayerCallLimiter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hitPlayerCallLimiter, put=setStaticF_hitPlayerCallLimiter)) ::GlobalNamespace::CallLimiter*  hitPlayerCallLimiter;

/// @brief Field impactEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_impactEffect, put=setStaticF_impactEffect)) ::GlobalNamespace::RoomSystem_ImpactFxContainer*  impactEffect;

/// @brief Field impactSendData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_impactSendData, put=setStaticF_impactSendData)) ::ArrayW<::System::Object*>  impactSendData;

/// @brief Field joinedRoom, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_joinedRoom, put=setStaticF_joinedRoom)) bool  joinedRoom;

/// @brief Field launchProjectile, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_launchProjectile, put=setStaticF_launchProjectile)) ::GlobalNamespace::RoomSystem_LaunchProjectileContainer*  launchProjectile;

/// @brief Field lavaSyncSendData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lavaSyncSendData, put=setStaticF_lavaSyncSendData)) ::ArrayW<::System::Object*>  lavaSyncSendData;

/// @brief Field m_roomSizeOnJoin, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_m_roomSizeOnJoin, put=setStaticF_m_roomSizeOnJoin)) uint8_t  m_roomSizeOnJoin;

/// @brief Field monkePointsRedeemedSendData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_monkePointsRedeemedSendData, put=setStaticF_monkePointsRedeemedSendData)) ::ArrayW<::System::Object*>  monkePointsRedeemedSendData;

/// @brief Field netEventCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_netEventCallbacks, put=setStaticF_netEventCallbacks)) ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_2<::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>*  netEventCallbacks;

/// @brief Field netPlayersInRoom, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_netPlayersInRoom, put=setStaticF_netPlayersInRoom)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  netPlayersInRoom;

/// @brief Field playerEffectData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerEffectData, put=setStaticF_playerEffectData)) ::ArrayW<::System::Object*>  playerEffectData;

/// @brief Field playerEffectDictionary, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerEffectDictionary, put=setStaticF_playerEffectDictionary)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PlayerEffect,::GlobalNamespace::RoomSystem_PlayerEffectConfig>*  playerEffectDictionary;

/// @brief Field playerImpactEffectPrefab, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerImpactEffectPrefab, put=setStaticF_playerImpactEffectPrefab)) ::UnityW<::UnityEngine::GameObject>  playerImpactEffectPrefab;

/// @brief Field playerLaunchedCallLimiter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerLaunchedCallLimiter, put=setStaticF_playerLaunchedCallLimiter)) ::GlobalNamespace::CallLimiter*  playerLaunchedCallLimiter;

/// @brief Field playerTouchedCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playerTouchedCallback, put=setStaticF_playerTouchedCallback)) ::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  playerTouchedCallback;

/// @brief Field prefabsInstantiated, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabsInstantiated, put=__cordl_internal_set_prefabsInstantiated)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  prefabsInstantiated;

/// @brief Field prefabsToInstantiate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabsToInstantiate, put=__cordl_internal_set_prefabsToInstantiate)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  prefabsToInstantiate;

/// @brief Field prefabsToInstantiateByPath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabsToInstantiateByPath, put=__cordl_internal_set_prefabsToInstantiateByPath)) ::ArrayW<::StringW>  prefabsToInstantiateByPath;

/// @brief Field projectileSendData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_projectileSendData, put=setStaticF_projectileSendData)) ::ArrayW<::System::Object*>  projectileSendData;

/// @brief Field reportHitSendData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reportHitSendData, put=setStaticF_reportHitSendData)) ::ArrayW<::System::Object*>  reportHitSendData;

/// @brief Field reportTouchSendData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reportTouchSendData, put=setStaticF_reportTouchSendData)) ::ArrayW<::System::Object*>  reportTouchSendData;

/// @brief Field roomGameMode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_roomGameMode, put=setStaticF_roomGameMode)) ::StringW  roomGameMode;

/// @brief Field roomSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomSettings, put=__cordl_internal_set_roomSettings)) ::UnityW<::GlobalNamespace::RoomSystemSettings>  roomSettings;

/// @brief Field s_effects, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_effects, put=setStaticF_s_effects)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RoomSystemEffect*>*  s_effects;

/// @brief Field s_reusableArrayPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_reusableArrayPool, put=setStaticF_s_reusableArrayPool)) ::GlobalNamespace::StaticArrayBag_1<::System::Object*>*  s_reusableArrayPool;

/// @brief Field sceneViews, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sceneViews, put=setStaticF_sceneViews)) ::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  sceneViews;

/// @brief Field sendEventData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sendEventData, put=setStaticF_sendEventData)) ::ArrayW<::System::Object*>  sendEventData;

/// @brief Field sendSoundDataOther, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sendSoundDataOther, put=setStaticF_sendSoundDataOther)) ::ArrayW<::System::Object*>  sendSoundDataOther;

/// @brief Field soundEffectCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_soundEffectCallback, put=setStaticF_soundEffectCallback)) ::System::Action_2<::GlobalNamespace::RoomSystem_SoundEffect,::GlobalNamespace::NetPlayer*>*  soundEffectCallback;

/// @brief Field soundSendData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_soundSendData, put=setStaticF_soundSendData)) ::ArrayW<::System::Object*>  soundSendData;

/// @brief Field statusEffectCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_statusEffectCallback, put=setStaticF_statusEffectCallback)) ::System::Action_1<::GlobalNamespace::RoomSystem_StatusEffects>*  statusEffectCallback;

/// @brief Field statusSendData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_statusSendData, put=setStaticF_statusSendData)) ::ArrayW<::System::Object*>  statusSendData;

/// @brief Method AddEffect, addr 0x5ad4b00, size 0xc0, virtual false, abstract: false, final false
static inline void AddEffect(::GlobalNamespace::RoomSystemEffect*  effect) ;

/// @brief Method Awake, addr 0x5acdd8c, size 0x320, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearOverridenRoomSize, addr 0x5ad17dc, size 0xc4, virtual false, abstract: false, final false
static inline void ClearOverridenRoomSize() ;

/// @brief Method DeserializeEffect, addr 0x5ad4dc4, size 0x164, virtual false, abstract: false, final false
static inline void DeserializeEffect(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeImpactEffect, addr 0x5acc714, size 0x4fc, virtual false, abstract: false, final false
static inline void DeserializeImpactEffect(::ArrayW<::System::Object*>  impactData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeLaunchProjectile, addr 0x5acb750, size 0x754, virtual false, abstract: false, final false
static inline void DeserializeLaunchProjectile(::ArrayW<::System::Object*>  projectileData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeLavaSync, addr 0x5acd5c0, size 0x50c, virtual false, abstract: false, final false
static inline void DeserializeLavaSync(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeMonkePointsRedeemed, addr 0x5acdbf8, size 0x194, virtual false, abstract: false, final false
static inline void DeserializeMonkePointsRedeemed(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializePlayerEffect, addr 0x5ad749c, size 0x1e4, virtual false, abstract: false, final false
static inline void DeserializePlayerEffect(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializePlayerHit, addr 0x5ad4418, size 0x6e8, virtual false, abstract: false, final false
static inline void DeserializePlayerHit(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializePlayerLaunched, addr 0x5ad3de4, size 0x380, virtual false, abstract: false, final false
static inline void DeserializePlayerLaunched(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeReportTouch, addr 0x5ad39c0, size 0x174, virtual false, abstract: false, final false
static inline void DeserializeReportTouch(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeSoundEffect, addr 0x5ad656c, size 0x3d4, virtual false, abstract: false, final false
static inline void DeserializeSoundEffect(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeserializeStatusEffect, addr 0x5ad5de4, size 0x268, virtual false, abstract: false, final false
static inline void DeserializeStatusEffect(::ArrayW<::System::Object*>  data, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method GetCurrentRoomExpectedSize, addr 0x5ad0e60, size 0x470, virtual false, abstract: false, final false
static inline uint8_t GetCurrentRoomExpectedSize() ;

/// @brief Method GetLowestActorNumberPlayer, addr 0x5ad12d0, size 0x184, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetPlayer* GetLowestActorNumberPlayer() ;

/// @brief Method GetMaxRoomSize, addr 0x5ad0dac, size 0x6c, virtual false, abstract: false, final false
static inline uint8_t GetMaxRoomSize() ;

/// @brief Method GetOverridenRoomSize, addr 0x5ad1700, size 0xdc, virtual false, abstract: false, final false
static inline uint8_t GetOverridenRoomSize() ;

/// @brief Method GetRoomSizeForCreate, addr 0x5ad14a0, size 0x128, virtual false, abstract: false, final false
static inline uint8_t GetRoomSizeForCreate(::GlobalNamespace::GTZone  zone, ::GorillaGameModes::GameModeType  mode, bool  privateRoom, bool  sub) ;

/// @brief Method HitPlayer, addr 0x5ad4164, size 0x2b4, virtual false, abstract: false, final false
static inline void HitPlayer(::GlobalNamespace::NetPlayer*  player, ::UnityEngine::Vector3  direction, float_t  strength) ;

/// @brief Method ImpactEffect, addr 0x5acc5f4, size 0x120, virtual false, abstract: false, final false
static inline void ImpactEffect(::GlobalNamespace::VRRig*  targetRig, ::UnityEngine::Vector3  position, float_t  r, float_t  g, float_t  b, float_t  a, int32_t  projectileCount, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method LaunchPlayer, addr 0x5ad3cd4, size 0x110, virtual false, abstract: false, final false
static inline void LaunchPlayer(::GlobalNamespace::NetPlayer*  player, ::UnityEngine::Vector3  velocity) ;

/// @brief Method MakeRoomMultiplayer, addr 0x5ad18a0, size 0xf0, virtual false, abstract: false, final false
static inline void MakeRoomMultiplayer(uint8_t  roomSize) ;

static inline ::GlobalNamespace::RoomSystem* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x5ace5dc, size 0xb8, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  paused) ;

/// @brief Method OnEvent, addr 0x5ad1a24, size 0x2f8, virtual false, abstract: false, final false
static inline void OnEvent(uint8_t  code, ::System::Object*  data, int32_t  source) ;

/// @brief Method OnEvent, addr 0x5ad1990, size 0x94, virtual false, abstract: false, final false
static inline void OnEvent(::ExitGames::Client::Photon::EventData*  data) ;

/// @brief Method OnJoinedRoom, addr 0x5ace694, size 0x8a8, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x5acf28c, size 0x480, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlaySoundEffect, addr 0x5ad64a4, size 0xc8, virtual false, abstract: false, final false
static inline void OnPlaySoundEffect(::GlobalNamespace::RoomSystem_SoundEffect  sound, ::GlobalNamespace::NetPlayer*  target) ;

/// @brief Method OnPlayerEffect, addr 0x5ad7224, size 0x278, virtual false, abstract: false, final false
static inline void OnPlayerEffect(::GlobalNamespace::PlayerEffect  effect, ::GlobalNamespace::NetPlayer*  target) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5acef3c, size 0x350, virtual false, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5acf70c, size 0x1fc, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method OnStatusEffect, addr 0x5ad5ccc, size 0x118, virtual false, abstract: false, final false
static inline void OnStatusEffect(::GlobalNamespace::RoomSystem_StatusEffects  status) ;

/// @brief Method OverrideRoomSize, addr 0x5ad15c8, size 0x138, virtual false, abstract: false, final false
static inline void OverrideRoomSize(uint8_t  size) ;

/// @brief Method PackLavaSyncData, addr 0x5acd108, size 0x2f8, virtual false, abstract: false, final false
static inline void PackLavaSyncData(uint8_t  zone, uint8_t  state, double_t  stateStartTime, float_t  activationProgress, int32_t  voteCount, ::ArrayW<int32_t>  votePlayerIds) ;

/// @brief Method PlayEffect, addr 0x5ad4c78, size 0x14c, virtual false, abstract: false, final false
static inline void PlayEffect(::GlobalNamespace::RoomSystemEffect*  effect) ;

/// @brief Method PlaySoundEffect, addr 0x5ad62ec, size 0xcc, virtual false, abstract: false, final false
static inline void PlaySoundEffect(int32_t  soundIndex, float_t  soundVolume, bool  stopCurrentAudio) ;

/// @brief Method PlaySoundEffect, addr 0x5ad63b8, size 0xec, virtual false, abstract: false, final false
static inline void PlaySoundEffect(int32_t  soundIndex, float_t  soundVolume, bool  stopCurrentAudio, ::GlobalNamespace::NetPlayer*  target) ;

/// @brief Method RemoveEffect, addr 0x5ad4bc0, size 0xb8, virtual false, abstract: false, final false
static inline void RemoveEffect(::GlobalNamespace::RoomSystemEffect*  effect) ;

/// @brief Method SearchForElevator, addr 0x5ad2538, size 0x34c, virtual false, abstract: false, final false
static inline void SearchForElevator(::ArrayW<::System::Object*>  shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SearchForNearby, addr 0x5ad1d1c, size 0x464, virtual false, abstract: false, final false
static inline void SearchForNearby(::ArrayW<::System::Object*>  shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SearchForParty, addr 0x5ad2180, size 0x3b8, virtual false, abstract: false, final false
static inline void SearchForParty(::ArrayW<::System::Object*>  shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SearchForShuttle, addr 0x5ad2884, size 0x354, virtual false, abstract: false, final false
static inline void SearchForShuttle(::ArrayW<::System::Object*>  shuffleData, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SendElevatorFollowCommand, addr 0x5ad34a8, size 0x80, virtual false, abstract: false, final false
static inline void SendElevatorFollowCommand(::StringW  shuffler, ::StringW  keyStr, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  targetFriendCollider) ;

/// @brief Method SendEvent, addr 0x5acc3dc, size 0x218, virtual false, abstract: false, final false
static inline void SendEvent(uint8_t  code, ::ArrayW<::System::Object*>  evData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetEventOptions*>  neo, bool  reliable) ;

/// @brief Method SendEvent, addr 0x5acd4d4, size 0xec, virtual false, abstract: false, final false
static inline void SendEvent(uint8_t  code, ::ArrayW<::System::Object*>  evData, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NetPlayer*>  target, bool  reliable) ;

/// @brief Method SendGroupJoinFollowCommand, addr 0x5ad3528, size 0x418, virtual false, abstract: false, final false
static inline void SendGroupJoinFollowCommand(uint8_t  eventType, ::StringW  shuffler, ::StringW  keyStr, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  targetFriendCollider) ;

/// @brief Method SendImpactEffect, addr 0x5accc10, size 0x3e8, virtual false, abstract: false, final false
static inline void SendImpactEffect(::UnityEngine::Vector3  position, float_t  r, float_t  g, float_t  b, float_t  a, int32_t  projectileCount) ;

/// @brief Method SendLaunchProjectile, addr 0x5acbea4, size 0x484, virtual false, abstract: false, final false
static inline void SendLaunchProjectile(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity, ::GlobalNamespace::RoomSystem_ProjectileSource  projectileSource, int32_t  projectileCount, bool  randomColour, uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) ;

/// @brief Method SendLavaSync, addr 0x5accff8, size 0x110, virtual false, abstract: false, final false
static inline void SendLavaSync(uint8_t  zone, uint8_t  state, double_t  stateStartTime, float_t  activationProgress, int32_t  voteCount, ::ArrayW<int32_t>  votePlayerIds) ;

/// @brief Method SendLavaSyncToPlayer, addr 0x5acd400, size 0xd4, virtual false, abstract: false, final false
static inline void SendLavaSyncToPlayer(uint8_t  zone, uint8_t  state, double_t  stateStartTime, float_t  activationProgress, int32_t  voteCount, ::ArrayW<int32_t>  votePlayerIds, ::GlobalNamespace::NetPlayer*  target) ;

/// @brief Method SendMonkePointsRedeemed, addr 0x5acdacc, size 0x12c, virtual false, abstract: false, final false
static inline void SendMonkePointsRedeemed(int32_t  redeemedPointCount) ;

/// @brief Method SendNearbyFollowCommand, addr 0x5ad2bd8, size 0x3bc, virtual false, abstract: false, final false
static inline void SendNearbyFollowCommand(::GlobalNamespace::GorillaFriendCollider*  friendCollider, ::StringW  shuffler, ::StringW  keyStr) ;

/// @brief Method SendPartyFollowCommand, addr 0x5ad2f94, size 0x514, virtual false, abstract: false, final false
static inline void SendPartyFollowCommand(::StringW  shuffler, ::StringW  keyStr) ;

/// @brief Method SendPlayerEffect, addr 0x5ad7680, size 0x1c8, virtual false, abstract: false, final false
static inline void SendPlayerEffect(::GlobalNamespace::PlayerEffect  effect, ::GlobalNamespace::NetPlayer*  target) ;

/// @brief Method SendReportTouch, addr 0x5ad3b34, size 0x1a0, virtual false, abstract: false, final false
static inline void SendReportTouch(::GlobalNamespace::NetPlayer*  touchedNetPlayer) ;

/// @brief Method SendShuttleFollowCommand, addr 0x5ad3940, size 0x80, virtual false, abstract: false, final false
static inline void SendShuttleFollowCommand(::StringW  shuffler, ::StringW  keyStr, ::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  targetFriendCollider) ;

/// @brief Method SendSoundEffectAll, addr 0x5ad69c8, size 0x274, virtual false, abstract: false, final false
static inline void SendSoundEffectAll(::GlobalNamespace::RoomSystem_SoundEffect  sound) ;

/// @brief Method SendSoundEffectAll, addr 0x5ad6940, size 0x78, virtual false, abstract: false, final false
static inline void SendSoundEffectAll(int32_t  soundIndex, float_t  soundVolume, bool  stopCurrentAudio) ;

/// @brief Method SendSoundEffectOnOther, addr 0x5ad6f74, size 0x2b0, virtual false, abstract: false, final false
static inline void SendSoundEffectOnOther(::GlobalNamespace::RoomSystem_SoundEffect  sound, ::GlobalNamespace::NetPlayer*  target) ;

/// @brief Method SendSoundEffectOnOther, addr 0x5ad6ef4, size 0x80, virtual false, abstract: false, final false
static inline void SendSoundEffectOnOther(int32_t  soundIndex, float_t  soundvolume, ::GlobalNamespace::NetPlayer*  target, bool  stopCurrentAudio) ;

/// @brief Method SendSoundEffectToPlayer, addr 0x5ad6cbc, size 0x238, virtual false, abstract: false, final false
static inline void SendSoundEffectToPlayer(::GlobalNamespace::RoomSystem_SoundEffect  sound, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SendSoundEffectToPlayer, addr 0x5ad6c3c, size 0x80, virtual false, abstract: false, final false
static inline void SendSoundEffectToPlayer(int32_t  soundIndex, float_t  soundVolume, ::GlobalNamespace::NetPlayer*  player, bool  stopCurrentAudio) ;

/// @brief Method SendStatusEffectAll, addr 0x5ad604c, size 0x160, virtual false, abstract: false, final false
static inline void SendStatusEffectAll(::GlobalNamespace::RoomSystem_StatusEffects  status) ;

/// @brief Method SendStatusEffectToPlayer, addr 0x5ad61ac, size 0x140, virtual false, abstract: false, final false
static inline void SendStatusEffectToPlayer(::GlobalNamespace::RoomSystem_StatusEffects  status, ::GlobalNamespace::NetPlayer*  target) ;

/// @brief Method SetFrozenTime, addr 0x5ad5550, size 0x330, virtual false, abstract: false, final false
static inline void SetFrozenTime() ;

/// @brief Method SetJoinedTaggedTime, addr 0x5ad5880, size 0x200, virtual false, abstract: false, final false
static inline void SetJoinedTaggedTime() ;

/// @brief Method SetSlowedTime, addr 0x5ad4f2c, size 0x344, virtual false, abstract: false, final false
static inline void SetSlowedTime() ;

/// @brief Method SetTaggedTime, addr 0x5ad5270, size 0x2e0, virtual false, abstract: false, final false
static inline void SetTaggedTime() ;

/// @brief Method SetUntaggedTime, addr 0x5ad5a80, size 0x24c, virtual false, abstract: false, final false
static inline void SetUntaggedTime() ;

/// @brief Method Start, addr 0x5ace0ac, size 0x530, virtual false, abstract: false, final false
inline void Start() ;

/// [OnEnterPlay_Run]
/// @brief Method StaticLoad, addr 0x5ad069c, size 0x65c, virtual false, abstract: false, final false
static inline void StaticLoad() ;

/// @brief Method TimerDC, addr 0x5ad0cf8, size 0xb4, virtual false, abstract: false, final false
static inline void TimerDC(::System::Object*  sender, ::System::Timers::ElapsedEventArgs*  args) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_prefabsInstantiated() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_prefabsInstantiated() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_prefabsToInstantiate() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_prefabsToInstantiate() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_prefabsToInstantiateByPath() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_prefabsToInstantiateByPath() ;

constexpr ::UnityW<::GlobalNamespace::RoomSystemSettings> const& __cordl_internal_get_roomSettings() const;

constexpr ::UnityW<::GlobalNamespace::RoomSystemSettings>& __cordl_internal_get_roomSettings() ;

constexpr void __cordl_internal_set_prefabsInstantiated(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_prefabsToInstantiate(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_prefabsToInstantiateByPath(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_roomSettings(::UnityW<::GlobalNamespace::RoomSystemSettings>  value) ;

/// @brief Method .ctor, addr 0x5ad7848, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTag::DelegateListProcessor* getStaticF_JoinedRoomEvent() ;

static inline ::GorillaTag::DelegateListProcessor* getStaticF_LeftRoomEvent() ;

static inline ::System::Action_1<::GlobalNamespace::RoomSystem_LavaSyncEventData>* getStaticF_OnLavaSyncReceived() ;

static inline ::System::Action_2<::GlobalNamespace::NetPlayer*,int32_t>* getStaticF_OnMonkePointsRedeemedReceived() ;

static inline ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* getStaticF_PlayerJoinedEvent() ;

static inline ::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>* getStaticF_PlayerLeftEvent() ;

static inline ::GorillaTag::DelegateListProcessor* getStaticF_PlayersChangedEvent() ;

static inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> getStaticF__InitialJoinTrigger_k__BackingField() ;

static inline bool getStaticF__IsVStumpRoom_k__BackingField() ;

static inline uint8_t getStaticF__RoomSizeOverride_k__BackingField() ;

static inline uint8_t getStaticF__RoomSizeReduction_k__BackingField() ;

static inline bool getStaticF__UseRoomSizeOverride_k__BackingField() ;

static inline bool getStaticF__WasRoomPrivate_k__BackingField() ;

static inline bool getStaticF__WasRoomSubscription_k__BackingField() ;

static inline ::UnityW<::GlobalNamespace::RoomSystemSettings> getStaticF___roomSettings() ;

static inline ::UnityW<::GlobalNamespace::RoomSystem> getStaticF_callbackInstance() ;

static inline ::System::Timers::Timer* getStaticF_disconnectTimer() ;

static inline ::ArrayW<::System::Object*> getStaticF_groupJoinSendData() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_hashValues() ;

static inline ::GlobalNamespace::CallLimiter* getStaticF_hitPlayerCallLimiter() ;

static inline ::GlobalNamespace::RoomSystem_ImpactFxContainer* getStaticF_impactEffect() ;

static inline ::ArrayW<::System::Object*> getStaticF_impactSendData() ;

static inline bool getStaticF_joinedRoom() ;

static inline ::GlobalNamespace::RoomSystem_LaunchProjectileContainer* getStaticF_launchProjectile() ;

static inline ::ArrayW<::System::Object*> getStaticF_lavaSyncSendData() ;

static inline uint8_t getStaticF_m_roomSizeOnJoin() ;

static inline ::ArrayW<::System::Object*> getStaticF_monkePointsRedeemedSendData() ;

static inline ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_2<::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>* getStaticF_netEventCallbacks() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* getStaticF_netPlayersInRoom() ;

static inline ::ArrayW<::System::Object*> getStaticF_playerEffectData() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PlayerEffect,::GlobalNamespace::RoomSystem_PlayerEffectConfig>* getStaticF_playerEffectDictionary() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_playerImpactEffectPrefab() ;

static inline ::GlobalNamespace::CallLimiter* getStaticF_playerLaunchedCallLimiter() ;

static inline ::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>* getStaticF_playerTouchedCallback() ;

static inline ::ArrayW<::System::Object*> getStaticF_projectileSendData() ;

static inline ::ArrayW<::System::Object*> getStaticF_reportHitSendData() ;

static inline ::ArrayW<::System::Object*> getStaticF_reportTouchSendData() ;

static inline ::StringW getStaticF_roomGameMode() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RoomSystemEffect*>* getStaticF_s_effects() ;

static inline ::GlobalNamespace::StaticArrayBag_1<::System::Object*>* getStaticF_s_reusableArrayPool() ;

static inline ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> getStaticF_sceneViews() ;

static inline ::ArrayW<::System::Object*> getStaticF_sendEventData() ;

static inline ::ArrayW<::System::Object*> getStaticF_sendSoundDataOther() ;

static inline ::System::Action_2<::GlobalNamespace::RoomSystem_SoundEffect,::GlobalNamespace::NetPlayer*>* getStaticF_soundEffectCallback() ;

static inline ::ArrayW<::System::Object*> getStaticF_soundSendData() ;

static inline ::System::Action_1<::GlobalNamespace::RoomSystem_StatusEffects>* getStaticF_statusEffectCallback() ;

static inline ::ArrayW<::System::Object*> getStaticF_statusSendData() ;

/// @brief Method get_AmITheHost, addr 0x5acfbd8, size 0xb0, virtual false, abstract: false, final false
static inline bool get_AmITheHost() ;

/// [CompilerGenerated]
/// @brief Method get_InitialJoinTrigger, addr 0x5acfeb0, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> get_InitialJoinTrigger() ;

/// [CompilerGenerated]
/// @brief Method get_IsVStumpRoom, addr 0x5acfc88, size 0x58, virtual false, abstract: false, final false
static inline bool get_IsVStumpRoom() ;

/// @brief Method get_JoinedRoom, addr 0x5acc328, size 0xb4, virtual false, abstract: false, final false
static inline bool get_JoinedRoom() ;

/// @brief Method get_PlayersInRoom, addr 0x5acfb28, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* get_PlayersInRoom() ;

/// @brief Method get_RoomGameMode, addr 0x5acfb80, size 0x58, virtual false, abstract: false, final false
static inline ::StringW get_RoomGameMode() ;

/// [CompilerGenerated]
/// @brief Method get_RoomSizeOverride, addr 0x5acf9c0, size 0x58, virtual false, abstract: false, final false
static inline uint8_t get_RoomSizeOverride() ;

/// [CompilerGenerated]
/// @brief Method get_RoomSizeReduction, addr 0x5acfa74, size 0x58, virtual false, abstract: false, final false
static inline uint8_t get_RoomSizeReduction() ;

/// [CompilerGenerated]
/// @brief Method get_UseRoomSizeOverride, addr 0x5acf908, size 0x58, virtual false, abstract: false, final false
static inline bool get_UseRoomSizeOverride() ;

/// [CompilerGenerated]
/// @brief Method get_WasRoomPrivate, addr 0x5acfd40, size 0x58, virtual false, abstract: false, final false
static inline bool get_WasRoomPrivate() ;

/// [CompilerGenerated]
/// @brief Method get_WasRoomSubscription, addr 0x5acfdf8, size 0x58, virtual false, abstract: false, final false
static inline bool get_WasRoomSubscription() ;

static inline void setStaticF_JoinedRoomEvent(::GorillaTag::DelegateListProcessor*  value) ;

static inline void setStaticF_LeftRoomEvent(::GorillaTag::DelegateListProcessor*  value) ;

static inline void setStaticF_OnLavaSyncReceived(::System::Action_1<::GlobalNamespace::RoomSystem_LavaSyncEventData>*  value) ;

static inline void setStaticF_OnMonkePointsRedeemedReceived(::System::Action_2<::GlobalNamespace::NetPlayer*,int32_t>*  value) ;

static inline void setStaticF_PlayerJoinedEvent(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_PlayerLeftEvent(::GorillaTag::DelegateListProcessor_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_PlayersChangedEvent(::GorillaTag::DelegateListProcessor*  value) ;

static inline void setStaticF__InitialJoinTrigger_k__BackingField(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value) ;

static inline void setStaticF__IsVStumpRoom_k__BackingField(bool  value) ;

static inline void setStaticF__RoomSizeOverride_k__BackingField(uint8_t  value) ;

static inline void setStaticF__RoomSizeReduction_k__BackingField(uint8_t  value) ;

static inline void setStaticF__UseRoomSizeOverride_k__BackingField(bool  value) ;

static inline void setStaticF__WasRoomPrivate_k__BackingField(bool  value) ;

static inline void setStaticF__WasRoomSubscription_k__BackingField(bool  value) ;

static inline void setStaticF___roomSettings(::UnityW<::GlobalNamespace::RoomSystemSettings>  value) ;

static inline void setStaticF_callbackInstance(::UnityW<::GlobalNamespace::RoomSystem>  value) ;

static inline void setStaticF_disconnectTimer(::System::Timers::Timer*  value) ;

static inline void setStaticF_groupJoinSendData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_hashValues(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_hitPlayerCallLimiter(::GlobalNamespace::CallLimiter*  value) ;

static inline void setStaticF_impactEffect(::GlobalNamespace::RoomSystem_ImpactFxContainer*  value) ;

static inline void setStaticF_impactSendData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_joinedRoom(bool  value) ;

static inline void setStaticF_launchProjectile(::GlobalNamespace::RoomSystem_LaunchProjectileContainer*  value) ;

static inline void setStaticF_lavaSyncSendData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_m_roomSizeOnJoin(uint8_t  value) ;

static inline void setStaticF_monkePointsRedeemedSendData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_netEventCallbacks(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Action_2<::ArrayW<::System::Object*>,::GlobalNamespace::PhotonMessageInfoWrapped>*>*  value) ;

static inline void setStaticF_netPlayersInRoom(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_playerEffectData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_playerEffectDictionary(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PlayerEffect,::GlobalNamespace::RoomSystem_PlayerEffectConfig>*  value) ;

static inline void setStaticF_playerImpactEffectPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

static inline void setStaticF_playerLaunchedCallLimiter(::GlobalNamespace::CallLimiter*  value) ;

static inline void setStaticF_playerTouchedCallback(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_projectileSendData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_reportHitSendData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_reportTouchSendData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_roomGameMode(::StringW  value) ;

static inline void setStaticF_s_effects(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RoomSystemEffect*>*  value) ;

static inline void setStaticF_s_reusableArrayPool(::GlobalNamespace::StaticArrayBag_1<::System::Object*>*  value) ;

static inline void setStaticF_sceneViews(::ArrayW<::UnityW<::Photon::Pun::PhotonView>>  value) ;

static inline void setStaticF_sendEventData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_sendSoundDataOther(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_soundEffectCallback(::System::Action_2<::GlobalNamespace::RoomSystem_SoundEffect,::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_soundSendData(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_statusEffectCallback(::System::Action_1<::GlobalNamespace::RoomSystem_StatusEffects>*  value) ;

static inline void setStaticF_statusSendData(::ArrayW<::System::Object*>  value) ;

/// [CompilerGenerated]
/// @brief Method set_InitialJoinTrigger, addr 0x5acff08, size 0x60, virtual false, abstract: false, final false
static inline void set_InitialJoinTrigger(::GorillaNetworking::GorillaNetworkJoinTrigger*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsVStumpRoom, addr 0x5acfce0, size 0x60, virtual false, abstract: false, final false
static inline void set_IsVStumpRoom(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoomSizeOverride, addr 0x5acfa18, size 0x5c, virtual false, abstract: false, final false
static inline void set_RoomSizeOverride(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RoomSizeReduction, addr 0x5acfacc, size 0x5c, virtual false, abstract: false, final false
static inline void set_RoomSizeReduction(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseRoomSizeOverride, addr 0x5acf960, size 0x60, virtual false, abstract: false, final false
static inline void set_UseRoomSizeOverride(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_WasRoomPrivate, addr 0x5acfd98, size 0x60, virtual false, abstract: false, final false
static inline void set_WasRoomPrivate(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_WasRoomSubscription, addr 0x5acfe50, size 0x60, virtual false, abstract: false, final false
static inline void set_WasRoomSubscription(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomSystem(RoomSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomSystem(RoomSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3396};

/// @brief Field lavaSyncHeaderSize offset 0xffffffff size 0x4
static constexpr int32_t  lavaSyncHeaderSize{static_cast<int32_t>(0x5)};

/// @brief Field lavaSyncTotalSize offset 0xffffffff size 0x4
static constexpr int32_t  lavaSyncTotalSize{static_cast<int32_t>(0x19)};

/// @brief Field monkePointsRedeemedMaxCount offset 0xffffffff size 0x4
static constexpr int32_t  monkePointsRedeemedMaxCount{static_cast<int32_t>(0x32)};

/// [SerializeField]
/// @brief Field roomSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RoomSystemSettings>  ___roomSettings;

/// [SerializeField]
/// @brief Field prefabsToInstantiateByPath, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___prefabsToInstantiateByPath;

/// [SerializeField]
/// @brief Field prefabsToInstantiate, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___prefabsToInstantiate;

/// @brief Field prefabsInstantiated, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___prefabsInstantiated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomSystem, ___roomSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem, ___prefabsToInstantiateByPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem, ___prefabsToInstantiate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem, ___prefabsInstantiated) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomSystem) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PhotonMessageInfoWrapped, RoomSystem::ImpactFxContainer, RoomSystem::ProjectileSource, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomSystem/LaunchProjectileContainer
class CORDL_TYPE RoomSystem_LaunchProjectileContainer : public ::GlobalNamespace::RoomSystem_ImpactFxContainer {
public:
// Declarations
/// @brief Field messageInfo, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_messageInfo, put=__cordl_internal_set_messageInfo)) ::GlobalNamespace::PhotonMessageInfoWrapped  messageInfo;

/// @brief Field overridecolour, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_overridecolour, put=__cordl_internal_set_overridecolour)) bool  overridecolour;

/// @brief Field projectileSource, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileSource, put=__cordl_internal_set_projectileSource)) ::GlobalNamespace::RoomSystem_ProjectileSource  projectileSource;

/// @brief Field tempThrowableGO, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempThrowableGO, put=__cordl_internal_set_tempThrowableGO)) ::UnityW<::UnityEngine::GameObject>  tempThrowableGO;

/// @brief Field tempThrowableRef, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempThrowableRef, put=__cordl_internal_set_tempThrowableRef)) ::UnityW<::GlobalNamespace::SnowballThrowable>  tempThrowableRef;

/// @brief Field velocity, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

static inline ::GlobalNamespace::RoomSystem_LaunchProjectileContainer* New_ctor() ;

/// @brief Method OnPlayFX, addr 0x5ad7f08, size 0x778, virtual true, abstract: false, final false
inline void OnPlayFX() ;

constexpr ::GlobalNamespace::PhotonMessageInfoWrapped const& __cordl_internal_get_messageInfo() const;

constexpr ::GlobalNamespace::PhotonMessageInfoWrapped& __cordl_internal_get_messageInfo() ;

constexpr bool const& __cordl_internal_get_overridecolour() const;

constexpr bool& __cordl_internal_get_overridecolour() ;

constexpr ::GlobalNamespace::RoomSystem_ProjectileSource const& __cordl_internal_get_projectileSource() const;

constexpr ::GlobalNamespace::RoomSystem_ProjectileSource& __cordl_internal_get_projectileSource() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_tempThrowableGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_tempThrowableGO() ;

constexpr ::UnityW<::GlobalNamespace::SnowballThrowable> const& __cordl_internal_get_tempThrowableRef() const;

constexpr ::UnityW<::GlobalNamespace::SnowballThrowable>& __cordl_internal_get_tempThrowableRef() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_messageInfo(::GlobalNamespace::PhotonMessageInfoWrapped  value) ;

constexpr void __cordl_internal_set_overridecolour(bool  value) ;

constexpr void __cordl_internal_set_projectileSource(::GlobalNamespace::RoomSystem_ProjectileSource  value) ;

constexpr void __cordl_internal_set_tempThrowableGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_tempThrowableRef(::UnityW<::GlobalNamespace::SnowballThrowable>  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5ad0694, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomSystem_LaunchProjectileContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomSystem_LaunchProjectileContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomSystem_LaunchProjectileContainer(RoomSystem_LaunchProjectileContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomSystem_LaunchProjectileContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomSystem_LaunchProjectileContainer(RoomSystem_LaunchProjectileContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3388};

/// @brief Field velocity, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field projectileSource, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::RoomSystem_ProjectileSource  ___projectileSource;

/// @brief Field overridecolour, offset: 0x48, size: 0x1, def value: None
 bool  ___overridecolour;

/// @brief Field messageInfo, offset: 0x50, size: 0x28, def value: None
 ::GlobalNamespace::PhotonMessageInfoWrapped  ___messageInfo;

/// @brief Field tempThrowableGO, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___tempThrowableGO;

/// @brief Field tempThrowableRef, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SnowballThrowable>  ___tempThrowableRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomSystem_LaunchProjectileContainer, ___velocity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LaunchProjectileContainer, ___projectileSource) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LaunchProjectileContainer, ___overridecolour) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LaunchProjectileContainer, ___messageInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LaunchProjectileContainer, ___tempThrowableGO) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_LaunchProjectileContainer, ___tempThrowableRef) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomSystem_LaunchProjectileContainer) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomSystem/ImpactFxContainer
class CORDL_TYPE RoomSystem_ImpactFxContainer : public ::System::Object {
public:
// Declarations
/// @brief Field colour, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_colour, put=__cordl_internal_set_colour)) ::UnityEngine::Color  colour;

/// @brief Field position, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field projectileIndex, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileIndex, put=__cordl_internal_set_projectileIndex)) int32_t  projectileIndex;

 __declspec(property(get=get_settings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  settings;

/// @brief Field targetRig, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRig, put=__cordl_internal_set_targetRig)) ::UnityW<::GlobalNamespace::VRRig>  targetRig;

/// @brief Convert operator to "::GlobalNamespace::IFXContext"
constexpr operator  ::GlobalNamespace::IFXContext*() noexcept;

static inline ::GlobalNamespace::RoomSystem_ImpactFxContainer* New_ctor() ;

/// @brief Method OnPlayFX, addr 0x5ad78e8, size 0x358, virtual true, abstract: false, final false
inline void OnPlayFX() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_colour() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_colour() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr int32_t const& __cordl_internal_get_projectileIndex() const;

constexpr int32_t& __cordl_internal_get_projectileIndex() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetRig() ;

constexpr void __cordl_internal_set_colour(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_projectileIndex(int32_t  value) ;

constexpr void __cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5ad068c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_settings, addr 0x5ad78d0, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::FXSystemSettings> get_settings() ;

/// @brief Convert to "::GlobalNamespace::IFXContext"
constexpr ::GlobalNamespace::IFXContext* i___GlobalNamespace__IFXContext() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomSystem_ImpactFxContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomSystem_ImpactFxContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomSystem_ImpactFxContainer(RoomSystem_ImpactFxContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomSystem_ImpactFxContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomSystem_ImpactFxContainer(RoomSystem_ImpactFxContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3387};

/// @brief Field targetRig, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetRig;

/// @brief Field position, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field colour, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___colour;

/// @brief Field projectileIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  ___projectileIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomSystem_ImpactFxContainer, ___targetRig) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_ImpactFxContainer, ___position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_ImpactFxContainer, ___colour) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomSystem_ImpactFxContainer, ___projectileIndex) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomSystem_ImpactFxContainer) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
