#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGameManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaGameManager)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
class GorillaGameManager_OnTouchDelegate;
}
namespace GlobalNamespace {
class GorillaGameManager___c__DisplayClass69_0;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class IWrappedSerializable;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class Tappable;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaGameModes {
struct GameModeType;
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
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaGameManager;
}
namespace GlobalNamespace {
class GorillaGameManager_OnTouchDelegate;
}
namespace GlobalNamespace {
class GorillaGameManager___c__DisplayClass69_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaGameManager*);
MARK_REF_T(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*);
MARK_REF_T(::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGameManager*, "", "GorillaGameManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*, "", "GorillaGameManager/OnTouchDelegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0*, "", "GorillaGameManager/<>c__DisplayClass69_0");
// Dependencies NetPlayer, Photon.Pun.MonoBehaviourPunCallbacks
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGameManager
class CORDL_TYPE GorillaGameManager : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
using OnTouchDelegate = ::GlobalNamespace::GorillaGameManager_OnTouchDelegate;

using __c__DisplayClass69_0 = ::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0;

 __declspec(property(get=ITickSystemTick_get_TickRunning, put=ITickSystemTick_set_TickRunning)) bool  ITickSystemTick_TickRunning;

/// @brief Field OnTouch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTouch, put=setStaticF_OnTouch)) ::GlobalNamespace::GorillaGameManager_OnTouchDelegate*  OnTouch;

 __declspec(property(get=get_Serializer)) ::UnityW<::GlobalNamespace::GameModeSerializer>  Serializer;

/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField)) bool  _ITickSystemTick_TickRunning_k__BackingField;

/// @brief Field _gameModeName, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameModeName, put=__cordl_internal_set__gameModeName)) ::StringW  _gameModeName;

/// @brief Field checkCooldown, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkCooldown, put=__cordl_internal_set_checkCooldown)) float_t  checkCooldown;

/// @brief Field currentNetPlayerArray, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentNetPlayerArray, put=__cordl_internal_set_currentNetPlayerArray)) ::ArrayW<::GlobalNamespace::NetPlayer*>  currentNetPlayerArray;

/// @brief Field fastJumpLimit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastJumpLimit, put=__cordl_internal_set_fastJumpLimit)) float_t  fastJumpLimit;

/// @brief Field fastJumpMultiplier, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fastJumpMultiplier, put=__cordl_internal_set_fastJumpMultiplier)) float_t  fastJumpMultiplier;

/// @brief Field lastCheck, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCheck, put=__cordl_internal_set_lastCheck)) float_t  lastCheck;

/// @brief Field lastTaggedActorNr, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastTaggedActorNr, put=__cordl_internal_set_lastTaggedActorNr)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  lastTaggedActorNr;

/// @brief Field onInstanceReady, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onInstanceReady, put=setStaticF_onInstanceReady)) ::System::Action*  onInstanceReady;

/// @brief Field onReplicatedClientReady, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onReplicatedClientReady, put=setStaticF_onReplicatedClientReady)) ::System::Action*  onReplicatedClientReady;

/// @brief Field outInt, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_outInt, put=__cordl_internal_set_outInt)) int32_t  outInt;

/// @brief Field outPlayer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_outPlayer, put=__cordl_internal_set_outPlayer)) ::GlobalNamespace::NetPlayer*  outPlayer;

/// @brief Field playerSpeed, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerSpeed, put=__cordl_internal_set_playerSpeed)) ::ArrayW<float_t>  playerSpeed;

/// @brief Field replicatedClientReady, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_replicatedClientReady, put=setStaticF_replicatedClientReady)) bool  replicatedClientReady;

/// @brief Field serializer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializer, put=__cordl_internal_set_serializer)) ::UnityW<::GlobalNamespace::GameModeSerializer>  serializer;

/// @brief Field slowJumpLimit, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowJumpLimit, put=__cordl_internal_set_slowJumpLimit)) float_t  slowJumpLimit;

/// @brief Field slowJumpMultiplier, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowJumpMultiplier, put=__cordl_internal_set_slowJumpMultiplier)) float_t  slowJumpMultiplier;

/// @brief Field tagDistanceThreshold, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagDistanceThreshold, put=__cordl_internal_set_tagDistanceThreshold)) float_t  tagDistanceThreshold;

/// @brief Field tempRig, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempRig, put=__cordl_internal_set_tempRig)) ::UnityW<::GlobalNamespace::VRRig>  tempRig;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IWrappedSerializable"
constexpr operator  ::GlobalNamespace::IWrappedSerializable*() noexcept;

/// @brief Method AddFusionDataBehaviour, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour) ;

/// @brief Method AddLastTagged, addr 0x59072d8, size 0x128, virtual false, abstract: false, final false
inline void AddLastTagged(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method Awake, addr 0x5905fac, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanAffectPlayer, addr 0x5906300, size 0x8, virtual true, abstract: false, final false
inline bool CanAffectPlayer(::GlobalNamespace::NetPlayer*  player, bool  thisFrame) ;

/// @brief Method CanJoinFrienship, addr 0x590630c, size 0x8, virtual true, abstract: false, final false
inline bool CanJoinFrienship(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method CanPlayerParticipate, addr 0x5906314, size 0x8, virtual true, abstract: false, final false
inline bool CanPlayerParticipate(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method FindPlayerVRRig, addr 0x5906340, size 0xd4, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> FindPlayerVRRig(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ForceStopGame_DisconnectAndDestroy, addr 0x59070fc, size 0x1dc, virtual false, abstract: false, final false
static inline void ForceStopGame_DisconnectAndDestroy() ;

/// @brief Method GameModeEnumToName, addr 0x5905d40, size 0x64, virtual false, abstract: false, final false
static inline ::StringW GameModeEnumToName(::GorillaGameModes::GameModeType  gameMode) ;

/// @brief Method GameModeName, addr 0x5906174, size 0xa8, virtual true, abstract: false, final false
inline ::StringW GameModeName() ;

/// @brief Method GameModeNameRoomLabel, addr 0x590621c, size 0xd8, virtual true, abstract: false, final false
inline ::StringW GameModeNameRoomLabel() ;

/// @brief Method GameType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GorillaGameModes::GameModeType GameType() ;

/// @brief Method GameTypeName, addr 0x5906820, size 0x78, virtual false, abstract: false, final false
inline ::StringW GameTypeName() ;

/// @brief Method HandleHandTap, addr 0x5906308, size 0x4, virtual true, abstract: false, final false
inline void HandleHandTap(::GlobalNamespace::NetPlayer*  tappingPlayer, ::GlobalNamespace::Tappable*  hitTappable, bool  leftHand, ::UnityEngine::Vector3  handVelocity, ::UnityEngine::Vector3  tapSurfaceNormal) ;

/// @brief Method HandleRoundComplete, addr 0x590631c, size 0x8, virtual true, abstract: false, final false
inline void HandleRoundComplete() ;

/// @brief Method HandleTagBroadcast, addr 0x5906324, size 0x4, virtual true, abstract: false, final false
inline void HandleTagBroadcast(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method HandleTagBroadcast, addr 0x5906328, size 0x4, virtual true, abstract: false, final false
inline void HandleTagBroadcast(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, double_t  tagTime) ;

/// @brief Method HitPlayer, addr 0x59062fc, size 0x4, virtual true, abstract: false, final false
inline void HitPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.get_TickRunning, addr 0x5905f9c, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemTick_get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemTick.set_TickRunning, addr 0x5905fa4, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemTick_set_TickRunning(bool  value) ;

/// @brief Method InfrequentUpdate, addr 0x59060c8, size 0xac, virtual true, abstract: false, final false
inline void InfrequentUpdate() ;

/// @brief Method LocalCanTag, addr 0x5906330, size 0x8, virtual true, abstract: false, final false
inline bool LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method LocalIsTagged, addr 0x5906338, size 0x8, virtual true, abstract: false, final false
inline bool LocalIsTagged(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method LocalPlayerSpeed, addr 0x5906548, size 0x40, virtual true, abstract: false, final false
inline ::ArrayW<float_t> LocalPlayerSpeed() ;

/// @brief Method LocalTag, addr 0x59062f4, size 0x4, virtual true, abstract: false, final false
inline void LocalTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, bool  bodyHit, bool  leftHand) ;

/// @brief Method MyMatIndex, addr 0x5906694, size 0x8, virtual true, abstract: false, final false
inline int32_t MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer) ;

/// @brief Method NetworkLinkDestroyed, addr 0x5906a98, size 0x90, virtual true, abstract: false, final false
inline void NetworkLinkDestroyed(::GlobalNamespace::GameModeSerializer*  netSerializer) ;

/// @brief Method NetworkLinkSetup, addr 0x5906a90, size 0x8, virtual true, abstract: false, final false
inline void NetworkLinkSetup(::GlobalNamespace::GameModeSerializer*  netSerializer) ;

/// @brief Method NewVRRig, addr 0x590632c, size 0x4, virtual true, abstract: false, final false
inline void NewVRRig(::GlobalNamespace::NetPlayer*  player, int32_t  vrrigPhotonViewID, bool  didTutorial) ;

static inline ::GlobalNamespace::GorillaGameManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x5905fb4, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5905fb0, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInstanceReady, addr 0x5906898, size 0xc0, virtual false, abstract: false, final false
static inline void OnInstanceReady(::System::Action*  action) ;

/// @brief Method OnMasterClientSwitched, addr 0x59070f8, size 0x4, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  newMaster) ;

/// @brief Method OnMasterClientSwitched, addr 0x5906f4c, size 0x4, virtual true, abstract: false, final false
inline void OnMasterClientSwitched(::Photon::Realtime::Player*  newMaster) ;

/// @brief Method OnPlayerEnteredRoom, addr 0x5907078, size 0x80, virtual true, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x5906f58, size 0x120, virtual true, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer) ;

/// @brief Method OnPlayerPropertiesUpdate, addr 0x5906f54, size 0x4, virtual true, abstract: false, final false
inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps) ;

/// @brief Method OnReplicatedClientReady, addr 0x59069ac, size 0xdc, virtual false, abstract: false, final false
static inline void OnReplicatedClientReady(::System::Action*  action) ;

/// @brief Method OnRoomPropertiesUpdate, addr 0x5906f50, size 0x4, virtual true, abstract: false, final false
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method OnSerializeRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSerializeRead(::System::Object*  newData) ;

/// @brief Method OnSerializeRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSerializeWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadLastTagged, addr 0x59075dc, size 0x174, virtual false, abstract: false, final false
inline void ReadLastTagged(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method ReplicatedClientReady, addr 0x5906960, size 0x4c, virtual false, abstract: false, final false
static inline void ReplicatedClientReady() ;

/// @brief Method ReportTag, addr 0x59062f8, size 0x4, virtual true, abstract: false, final false
inline void ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

/// @brief Method ResetGame, addr 0x5906b28, size 0x4, virtual true, abstract: false, final false
inline void ResetGame() ;

/// @brief Method SpecialHandFX, addr 0x590669c, size 0x8, virtual true, abstract: false, final false
inline int32_t SpecialHandFX(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::RigContainer*  rigContainer) ;

/// @brief Method StartPlaying, addr 0x5906b2c, size 0x24c, virtual true, abstract: false, final false
inline void StartPlaying() ;

/// @brief Method StaticFindRigForPlayer, addr 0x5906414, size 0x134, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRig> StaticFindRigForPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method StopPlaying, addr 0x5906d78, size 0x1d4, virtual true, abstract: false, final false
inline void StopPlaying() ;

/// @brief Method Tick, addr 0x5905fb8, size 0x110, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpdatePlayerAppearance, addr 0x5906588, size 0x10c, virtual true, abstract: false, final false
inline void UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method ValidGameMode, addr 0x59066a4, size 0x17c, virtual true, abstract: false, final false
inline bool ValidGameMode() ;

/// @brief Method WriteLastTagged, addr 0x5907400, size 0x1dc, virtual false, abstract: false, final false
inline void WriteLastTagged(::Photon::Pun::PhotonStream*  stream) ;

constexpr bool const& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__gameModeName() const;

constexpr ::StringW& __cordl_internal_get__gameModeName() ;

constexpr float_t const& __cordl_internal_get_checkCooldown() const;

constexpr float_t& __cordl_internal_get_checkCooldown() ;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& __cordl_internal_get_currentNetPlayerArray() const;

constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& __cordl_internal_get_currentNetPlayerArray() ;

constexpr float_t const& __cordl_internal_get_fastJumpLimit() const;

constexpr float_t& __cordl_internal_get_fastJumpLimit() ;

constexpr float_t const& __cordl_internal_get_fastJumpMultiplier() const;

constexpr float_t& __cordl_internal_get_fastJumpMultiplier() ;

constexpr float_t const& __cordl_internal_get_lastCheck() const;

constexpr float_t& __cordl_internal_get_lastCheck() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_lastTaggedActorNr() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_lastTaggedActorNr() ;

constexpr int32_t const& __cordl_internal_get_outInt() const;

constexpr int32_t& __cordl_internal_get_outInt() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_outPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_outPlayer() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_playerSpeed() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_playerSpeed() ;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& __cordl_internal_get_serializer() const;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& __cordl_internal_get_serializer() ;

constexpr float_t const& __cordl_internal_get_slowJumpLimit() const;

constexpr float_t& __cordl_internal_get_slowJumpLimit() ;

constexpr float_t const& __cordl_internal_get_slowJumpMultiplier() const;

constexpr float_t& __cordl_internal_get_slowJumpMultiplier() ;

constexpr float_t const& __cordl_internal_get_tagDistanceThreshold() const;

constexpr float_t& __cordl_internal_get_tagDistanceThreshold() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_tempRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_tempRig() ;

constexpr void __cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__gameModeName(::StringW  value) ;

constexpr void __cordl_internal_set_checkCooldown(float_t  value) ;

constexpr void __cordl_internal_set_currentNetPlayerArray(::ArrayW<::GlobalNamespace::NetPlayer*>  value) ;

constexpr void __cordl_internal_set_fastJumpLimit(float_t  value) ;

constexpr void __cordl_internal_set_fastJumpMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_lastCheck(float_t  value) ;

constexpr void __cordl_internal_set_lastTaggedActorNr(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_outInt(int32_t  value) ;

constexpr void __cordl_internal_set_outPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_playerSpeed(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value) ;

constexpr void __cordl_internal_set_slowJumpLimit(float_t  value) ;

constexpr void __cordl_internal_set_slowJumpMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_tagDistanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_tempRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5907750, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnTouch, addr 0x5905da4, size 0xb8, virtual false, abstract: false, final false
static inline void add_OnTouch(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*  value) ;

static inline ::GlobalNamespace::GorillaGameManager_OnTouchDelegate* getStaticF_OnTouch() ;

static inline ::System::Action* getStaticF_onInstanceReady() ;

static inline ::System::Action* getStaticF_onReplicatedClientReady() ;

static inline bool getStaticF_replicatedClientReady() ;

/// @brief Method get_Serializer, addr 0x5906a88, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameModeSerializer> get_Serializer() ;

/// @brief Method get_instance, addr 0x5905f14, size 0x88, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaGameManager> get_instance() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Convert to "::GlobalNamespace::IWrappedSerializable"
constexpr ::GlobalNamespace::IWrappedSerializable* i___GlobalNamespace__IWrappedSerializable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnTouch, addr 0x5905e5c, size 0xb8, virtual false, abstract: false, final false
static inline void remove_OnTouch(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*  value) ;

static inline void setStaticF_OnTouch(::GlobalNamespace::GorillaGameManager_OnTouchDelegate*  value) ;

static inline void setStaticF_onInstanceReady(::System::Action*  value) ;

static inline void setStaticF_onReplicatedClientReady(::System::Action*  value) ;

static inline void setStaticF_replicatedClientReady(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGameManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGameManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGameManager(GorillaGameManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGameManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGameManager(GorillaGameManager const& ) = delete;

/// @brief Field GAME_MODE_AMBUSH_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_AMBUSH_ROOM_LABEL_KEY{u"GAME_MODE_AMBUSH_ROOM_LABEL"};

/// @brief Field GAME_MODE_CASUAL_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_CASUAL_ROOM_LABEL_KEY{u"GAME_MODE_CASUAL_ROOM_LABEL"};

/// @brief Field GAME_MODE_COMP_INF_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_COMP_INF_ROOM_LABEL_KEY{u"GAME_MODE_COMP_INF_ROOM_LABEL"};

/// @brief Field GAME_MODE_CUSTOM_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_CUSTOM_ROOM_LABEL_KEY{u"GAME_MODE_CUSTOM_ROOM_LABEL"};

/// @brief Field GAME_MODE_FREEZE_TAG_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_FREEZE_TAG_ROOM_LABEL_KEY{u"GAME_MODE_FREEZE_TAG_ROOM_LABEL"};

/// @brief Field GAME_MODE_GHOST_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_GHOST_ROOM_LABEL_KEY{u"GAME_MODE_GHOST_ROOM_LABEL"};

/// @brief Field GAME_MODE_GUARDIAN_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_GUARDIAN_ROOM_LABEL_KEY{u"GAME_MODE_GUARDIAN_ROOM_LABEL"};

/// @brief Field GAME_MODE_HUNT_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_HUNT_ROOM_LABEL_KEY{u"GAME_MODE_HUNT_ROOM_LABEL"};

/// @brief Field GAME_MODE_INFECTION_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_INFECTION_ROOM_LABEL_KEY{u"GAME_MODE_INFECTION_ROOM_LABEL"};

/// @brief Field GAME_MODE_NONE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_NONE_KEY{u"GAME_MODE_NONE"};

/// @brief Field GAME_MODE_NONE_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_NONE_ROOM_LABEL_KEY{u"GAME_MODE_NONE_ROOM_LABEL"};

/// @brief Field GAME_MODE_PAINTBRAWL_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_PAINTBRAWL_ROOM_LABEL_KEY{u"GAME_MODE_PAINTBRAWL_ROOM_LABEL"};

/// @brief Field GAME_MODE_PROP_HUNT_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_PROP_HUNT_ROOM_LABEL_KEY{u"GAME_MODE_PROP_HUNT_ROOM_LABEL"};

/// @brief Field GAME_MODE_SUPER_CASUAL_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_SUPER_CASUAL_ROOM_LABEL_KEY{u"GAME_MODE_SUPER_CASUAL_ROOM_LABEL"};

/// @brief Field GAME_MODE_SUPER_INFECTION_ROOM_LABEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_MODE_SUPER_INFECTION_ROOM_LABEL_KEY{u"GAME_MODE_SUPER_INFECTION_ROOM_LABEL"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2163};

/// @brief Field k_defaultMatIndex offset 0xffffffff size 0x4
static constexpr int32_t  k_defaultMatIndex{static_cast<int32_t>(0x0)};

/// @brief Field fastJumpLimit, offset: 0x28, size: 0x4, def value: None
 float_t  ___fastJumpLimit;

/// @brief Field fastJumpMultiplier, offset: 0x2c, size: 0x4, def value: None
 float_t  ___fastJumpMultiplier;

/// @brief Field slowJumpLimit, offset: 0x30, size: 0x4, def value: None
 float_t  ___slowJumpLimit;

/// @brief Field slowJumpMultiplier, offset: 0x34, size: 0x4, def value: None
 float_t  ___slowJumpMultiplier;

/// @brief Field lastCheck, offset: 0x38, size: 0x4, def value: None
 float_t  ___lastCheck;

/// @brief Field checkCooldown, offset: 0x3c, size: 0x4, def value: None
 float_t  ___checkCooldown;

/// @brief Field tagDistanceThreshold, offset: 0x40, size: 0x4, def value: None
 float_t  ___tagDistanceThreshold;

/// @brief Field outPlayer, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___outPlayer;

/// @brief Field outInt, offset: 0x50, size: 0x4, def value: None
 int32_t  ___outInt;

/// @brief Field tempRig, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___tempRig;

/// @brief Field currentNetPlayerArray, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NetPlayer*>  ___currentNetPlayerArray;

/// @brief Field playerSpeed, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<float_t>  ___playerSpeed;

/// @brief Field lastTaggedActorNr, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___lastTaggedActorNr;

/// [CompilerGenerated]
/// @brief Field <ITickSystemTick.TickRunning>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____ITickSystemTick_TickRunning_k__BackingField;

/// @brief Field _gameModeName, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____gameModeName;

/// @brief Field serializer, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameModeSerializer>  ___serializer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___fastJumpLimit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___fastJumpMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___slowJumpLimit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___slowJumpMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___lastCheck) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___checkCooldown) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___tagDistanceThreshold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___outPlayer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___outInt) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___tempRig) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___currentNetPlayerArray) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___playerSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___lastTaggedActorNr) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ____ITickSystemTick_TickRunning_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ____gameModeName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGameManager, ___serializer) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaGameManager) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGameManager/<>c__DisplayClass69_0
class CORDL_TYPE GorillaGameManager___c__DisplayClass69_0 : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action*  action;

static inline ::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0* New_ctor() ;

/// @brief Method <OnInstanceReady>b__0, addr 0x5907968, size 0x118, virtual false, abstract: false, final false
inline void _OnInstanceReady_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_action() const;

constexpr ::System::Action*& __cordl_internal_get_action() ;

constexpr void __cordl_internal_set_action(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5906958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGameManager___c__DisplayClass69_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGameManager___c__DisplayClass69_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGameManager___c__DisplayClass69_0(GorillaGameManager___c__DisplayClass69_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGameManager___c__DisplayClass69_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGameManager___c__DisplayClass69_0(GorillaGameManager___c__DisplayClass69_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2162};

/// @brief Field action, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0, ___action) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaGameManager___c__DisplayClass69_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGameManager/OnTouchDelegate
class CORDL_TYPE GorillaGameManager_OnTouchDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5907934, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x590795c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5907920, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer) ;

static inline ::GlobalNamespace::GorillaGameManager_OnTouchDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5907814, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGameManager_OnTouchDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGameManager_OnTouchDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGameManager_OnTouchDelegate(GorillaGameManager_OnTouchDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGameManager_OnTouchDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGameManager_OnTouchDelegate(GorillaGameManager_OnTouchDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2161};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaGameManager_OnTouchDelegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
