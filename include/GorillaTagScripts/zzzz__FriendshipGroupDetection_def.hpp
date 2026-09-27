#pragma once
// IWYU pragma private; include "GorillaTagScripts/FriendshipGroupDetection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GroupJoinZoneAB_def.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_def.hpp"
#include "GorillaTag/zzzz__GTColor_HSVRanges_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendshipGroupDetection)
namespace GlobalNamespace {
struct FriendshipGroupDetection_PlayerFist;
}
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
struct GroupJoinZoneAB;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
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
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class FriendshipGroupDetection;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::FriendshipGroupDetection*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::FriendshipGroupDetection*, "GorillaTagScripts", "FriendshipGroupDetection");
// Dependencies GorillaTag.GTColor::HSVRanges, GroupJoinZoneAB, NetworkSceneObject, Unity.Profiling.ProfilerMarker, UnityEngine.Color
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.FriendshipGroupDetection
class CORDL_TYPE FriendshipGroupDetection : public ::GlobalNamespace::NetworkSceneObject {
public:
// Declarations
using PlayerFist = ::GlobalNamespace::FriendshipGroupDetection_PlayerFist;

 __declspec(property(get=get_DidJoinLeftHanded, put=set_DidJoinLeftHanded)) bool  DidJoinLeftHanded;

 __declspec(property(get=get_IsInParty)) bool  IsInParty;

 __declspec(property(get=get_MyBraceletSelfIndex, put=set_MyBraceletSelfIndex)) int32_t  MyBraceletSelfIndex;

 __declspec(property(get=get_PartyMemberIDs)) ::System::Collections::Generic::List_1<::StringW>*  PartyMemberIDs;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field WillJoinLeftHanded, offset 0x169, size 0x1 
 __declspec(property(get=__cordl_internal_get_WillJoinLeftHanded, put=__cordl_internal_set_WillJoinLeftHanded)) bool  WillJoinLeftHanded;

/// @brief Field <DidJoinLeftHanded>k__BackingField, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get__DidJoinLeftHanded_k__BackingField, put=__cordl_internal_set__DidJoinLeftHanded_k__BackingField)) bool  _DidJoinLeftHanded_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GorillaTagScripts::FriendshipGroupDetection>  _Instance_k__BackingField;

/// @brief Field <MyBraceletSelfIndex>k__BackingField, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__MyBraceletSelfIndex_k__BackingField, put=__cordl_internal_set__MyBraceletSelfIndex_k__BackingField)) int32_t  _MyBraceletSelfIndex_k__BackingField;

/// @brief Field <TickRunning>k__BackingField, offset 0x121, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field <myBeadColors>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__myBeadColors_k__BackingField, put=__cordl_internal_set__myBeadColors_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Color>*  _myBeadColors_k__BackingField;

/// @brief Field <myBraceletColor>k__BackingField, offset 0xa8, size 0x10 
 __declspec(property(get=__cordl_internal_get__myBraceletColor_k__BackingField, put=__cordl_internal_set__myBraceletColor_k__BackingField)) ::UnityEngine::Color  _myBraceletColor_k__BackingField;

/// @brief Field <partyZone>k__BackingField, offset 0xbc, size 0x8 
 __declspec(property(get=__cordl_internal_get__partyZone_k__BackingField, put=__cordl_internal_set__partyZone_k__BackingField)) ::GlobalNamespace::GroupJoinZoneAB  _partyZone_k__BackingField;

/// @brief Field aboutToGroupJoin_CooldownUntilTimestamp, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_aboutToGroupJoin_CooldownUntilTimestamp, put=__cordl_internal_set_aboutToGroupJoin_CooldownUntilTimestamp)) float_t  aboutToGroupJoin_CooldownUntilTimestamp;

/// @brief Field amFirstProvisionalPlayer, offset 0x148, size 0x1 
 __declspec(property(get=__cordl_internal_get_amFirstProvisionalPlayer, put=__cordl_internal_set_amFirstProvisionalPlayer)) bool  amFirstProvisionalPlayer;

/// @brief Field audioSource, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field braceletRandomColorHSVRanges, offset 0xd0, size 0x18 
 __declspec(property(get=__cordl_internal_get_braceletRandomColorHSVRanges, put=__cordl_internal_set_braceletRandomColorHSVRanges)) ::GlobalNamespace::GTColor_HSVRanges  braceletRandomColorHSVRanges;

/// @brief Field cooldownAfterCreatingGroup, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownAfterCreatingGroup, put=__cordl_internal_set_cooldownAfterCreatingGroup)) float_t  cooldownAfterCreatingGroup;

/// @brief Field debug, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_debug, put=__cordl_internal_set_debug)) bool  debug;

/// @brief Field debugStr, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugStr, put=__cordl_internal_set_debugStr)) ::System::Text::StringBuilder*  debugStr;

/// @brief Field detectionRadius, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_detectionRadius, put=__cordl_internal_set_detectionRadius)) float_t  detectionRadius;

/// @brief Field failedToFollowRefreshPartyDelay, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_failedToFollowRefreshPartyDelay, put=__cordl_internal_set_failedToFollowRefreshPartyDelay)) double_t  failedToFollowRefreshPartyDelay;

/// @brief Field fistBumpInterruptedAudio, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fistBumpInterruptedAudio, put=__cordl_internal_set_fistBumpInterruptedAudio)) ::UnityW<::UnityEngine::AudioClip>  fistBumpInterruptedAudio;

/// @brief Field friendshipBubble, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBubble, put=__cordl_internal_set_friendshipBubble)) ::UnityW<::UnityEngine::GameObject>  friendshipBubble;

/// @brief Field groupCreateAfterTimestamp, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupCreateAfterTimestamp, put=__cordl_internal_set_groupCreateAfterTimestamp)) float_t  groupCreateAfterTimestamp;

/// @brief Field groupTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_groupTime, put=__cordl_internal_set_groupTime)) float_t  groupTime;

/// @brief Field groupZoneCallbacks, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupZoneCallbacks, put=__cordl_internal_set_groupZoneCallbacks)) ::System::Collections::Generic::List_1<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>*  groupZoneCallbacks;

/// @brief Field hapticDuration, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field joinedRoomRefreshPartyDelay, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinedRoomRefreshPartyDelay, put=__cordl_internal_set_joinedRoomRefreshPartyDelay)) double_t  joinedRoomRefreshPartyDelay;

/// @brief Field lastFailedToFollowPartyTime, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastFailedToFollowPartyTime, put=__cordl_internal_set_lastFailedToFollowPartyTime)) double_t  lastFailedToFollowPartyTime;

/// @brief Field lastJoinedRoomTime, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastJoinedRoomTime, put=__cordl_internal_set_lastJoinedRoomTime)) double_t  lastJoinedRoomTime;

/// @brief Field m_maxGroupJoinTimeDifference, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxGroupJoinTimeDifference, put=__cordl_internal_set_m_maxGroupJoinTimeDifference)) float_t  m_maxGroupJoinTimeDifference;

 __declspec(property(get=get_myBeadColors, put=set_myBeadColors)) ::System::Collections::Generic::List_1<::UnityEngine::Color>*  myBeadColors;

 __declspec(property(get=get_myBraceletColor, put=set_myBraceletColor)) ::UnityEngine::Color  myBraceletColor;

/// @brief Field myPartyMemberIDs, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPartyMemberIDs, put=__cordl_internal_set_myPartyMemberIDs)) ::System::Collections::Generic::List_1<::StringW>*  myPartyMemberIDs;

/// @brief Field myPartyMembersHash, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPartyMembersHash, put=__cordl_internal_set_myPartyMembersHash)) ::System::Collections::Generic::HashSet_1<::StringW>*  myPartyMembersHash;

/// @brief Field offset, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) double_t  offset;

/// @brief Field particleSystem, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystem, put=__cordl_internal_set_particleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystem;

/// @brief Field partyMergeIDs, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_partyMergeIDs, put=__cordl_internal_set_partyMergeIDs)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*  partyMergeIDs;

 __declspec(property(get=get_partyZone, put=set_partyZone)) ::GlobalNamespace::GroupJoinZoneAB  partyZone;

/// @brief Field playEffectsAfterTimestamp, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_playEffectsAfterTimestamp, put=__cordl_internal_set_playEffectsAfterTimestamp)) float_t  playEffectsAfterTimestamp;

/// @brief Field playEffectsDelay, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_playEffectsDelay, put=__cordl_internal_set_playEffectsDelay)) float_t  playEffectsDelay;

/// @brief Field playersInProvisionalGroup, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersInProvisionalGroup, put=__cordl_internal_set_playersInProvisionalGroup)) ::System::Collections::Generic::List_1<int32_t>*  playersInProvisionalGroup;

/// @brief Field playersMakingFists, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersMakingFists, put=__cordl_internal_set_playersMakingFists)) ::System::Collections::Generic::List_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*  playersMakingFists;

/// @brief Field playersToPropagateFrom, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersToPropagateFrom, put=__cordl_internal_set_playersToPropagateFrom)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*  playersToPropagateFrom;

/// @brief Field profiler_Tick, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_profiler_Tick, put=setStaticF_profiler_Tick)) ::Unity::Profiling::ProfilerMarker  profiler_Tick;

/// @brief Field profiler_updateProvisionalGroup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_profiler_updateProvisionalGroup, put=setStaticF_profiler_updateProvisionalGroup)) ::Unity::Profiling::ProfilerMarker  profiler_updateProvisionalGroup;

/// @brief Field provisionalGroupUsingLeftHands, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_provisionalGroupUsingLeftHands, put=__cordl_internal_set_provisionalGroupUsingLeftHands)) ::System::Collections::Generic::List_1<int32_t>*  provisionalGroupUsingLeftHands;

/// @brief Field suppressPartyCreationUntilTimestamp, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_suppressPartyCreationUntilTimestamp, put=__cordl_internal_set_suppressPartyCreationUntilTimestamp)) float_t  suppressPartyCreationUntilTimestamp;

/// @brief Field tempColorLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempColorLookup, put=setStaticF_tempColorLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*  tempColorLookup;

/// @brief Field tempIntList, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempIntList, put=__cordl_internal_set_tempIntList)) ::System::Collections::Generic::List_1<int32_t>*  tempIntList;

/// @brief Field userIdLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_userIdLookup, put=setStaticF_userIdLookup)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  userIdLookup;

/// @brief Field wantsPartyRefreshPostFollowFailed, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_wantsPartyRefreshPostFollowFailed, put=__cordl_internal_set_wantsPartyRefreshPostFollowFailed)) bool  wantsPartyRefreshPostFollowFailed;

/// @brief Field wantsPartyRefreshPostJoin, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_wantsPartyRefreshPostJoin, put=__cordl_internal_set_wantsPartyRefreshPostJoin)) bool  wantsPartyRefreshPostJoin;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AddGroupZoneCallback, addr 0x5bbcb5c, size 0xac, virtual false, abstract: false, final false
inline void AddGroupZoneCallback(::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*  callback) ;

/// [PunRPC]
/// @brief Method AddPartyMembers, addr 0x5bc1828, size 0x88, virtual false, abstract: false, final false
inline void AddPartyMembers(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method AddPartyMembersWrapped, addr 0x5bc18b0, size 0x19c, virtual false, abstract: false, final false
inline void AddPartyMembersWrapped(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, ::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped) ;

/// @brief Method AnyPartyMembersOutsideFriendCollider, addr 0x5bbccc0, size 0x410, virtual false, abstract: false, final false
inline bool AnyPartyMembersOutsideFriendCollider() ;

/// @brief Method Awake, addr 0x5bbbfd4, size 0x1f8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckPartyZoneCallbacks, addr 0x5bbfed8, size 0x144, virtual false, abstract: false, final false
inline void CheckPartyZoneCallbacks() ;

/// @brief Method IsInMyGroup, addr 0x5bbcc60, size 0x60, virtual false, abstract: false, final false
inline bool IsInMyGroup(::StringW  userID) ;

/// @brief Method IsPartyWithinCollider, addr 0x5bc3b04, size 0x2d8, virtual false, abstract: false, final false
inline bool IsPartyWithinCollider(::GlobalNamespace::GorillaFriendCollider*  friendCollider, bool  checkLocal) ;

/// @brief Method LeaveParty, addr 0x5bc2390, size 0x4e0, virtual false, abstract: false, final false
inline void LeaveParty() ;

static inline ::GorillaTagScripts::FriendshipGroupDetection* New_ctor() ;

/// [PunRPC]
/// @brief Method NotifyNoPartyToMerge, addr 0x5bc001c, size 0xd8, virtual false, abstract: false, final false
inline void NotifyNoPartyToMerge(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method NotifyPartyGameModeChanged, addr 0x5bc3938, size 0x70, virtual false, abstract: false, final false
inline void NotifyPartyGameModeChanged(::StringW  gameMode, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method NotifyPartyGameModeChangedWrapped, addr 0x5bc39a8, size 0x15c, virtual false, abstract: false, final false
inline void NotifyPartyGameModeChangedWrapped(::StringW  gameMode, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// [PunRPC]
/// @brief Method NotifyPartyMerging, addr 0x5bc00f4, size 0xf4, virtual false, abstract: false, final false
inline void NotifyPartyMerging(::ArrayW<int32_t>  memberIDs, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnDisable, addr 0x5bbc2e4, size 0x118, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bbc1cc, size 0x118, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFailedToFollowParty, addr 0x5bc2870, size 0x30, virtual false, abstract: false, final false
inline void OnFailedToFollowParty() ;

/// @brief Method OnPartyMembershipChanged, addr 0x5bc1ac8, size 0x8c8, virtual false, abstract: false, final false
inline void OnPartyMembershipChanged() ;

/// @brief Method OnPlayerJoinedRoom, addr 0x5bbc3fc, size 0x3a4, virtual false, abstract: false, final false
inline void OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  joiningPlayer) ;

/// @brief Method PackColor, addr 0x5bbef78, size 0x260, virtual false, abstract: false, final false
static inline int16_t PackColor(::UnityEngine::Color  col) ;

/// @brief Method PartMemberIsAboutToGroupJoinWrapped, addr 0x5bc09a0, size 0x138, virtual false, abstract: false, final false
inline void PartMemberIsAboutToGroupJoinWrapped(::GlobalNamespace::PhotonMessageInfoWrapped  wrappedInfo) ;

/// @brief Method PartyFormedSuccesfullyWrapped, addr 0x5bc0bf4, size 0x548, virtual false, abstract: false, final false
inline void PartyFormedSuccesfullyWrapped(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, bool  forceDebug, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// [PunRPC]
/// @brief Method PartyFormedSuccessfully, addr 0x5bc0ad8, size 0x11c, virtual false, abstract: false, final false
inline void PartyFormedSuccessfully(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, bool  forceDebug, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method PartyMemberIsAboutToGroupJoin, addr 0x5bc08b0, size 0xf0, virtual false, abstract: false, final false
inline void PartyMemberIsAboutToGroupJoin(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlayerIDLeftParty, addr 0x5bc28a0, size 0x118, virtual false, abstract: false, final false
inline void PlayerIDLeftParty(::StringW  userID) ;

/// [PunRPC]
/// @brief Method PlayerLeftParty, addr 0x5bc29b8, size 0xf0, virtual false, abstract: false, final false
inline void PlayerLeftParty(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlayerLeftPartyWrapped, addr 0x5bc2aa8, size 0x13c, virtual false, abstract: false, final false
inline void PlayerLeftPartyWrapped(::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped) ;

/// @brief Method RefreshPartyMembers, addr 0x5bbc7a0, size 0x3bc, virtual false, abstract: false, final false
inline void RefreshPartyMembers() ;

/// @brief Method RemoveGroupZoneCallback, addr 0x5bbcc08, size 0x58, virtual false, abstract: false, final false
inline void RemoveGroupZoneCallback(::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*  callback) ;

/// [PunRPC]
/// @brief Method RequestPartyGameMode, addr 0x5bc33f8, size 0x70, virtual false, abstract: false, final false
inline void RequestPartyGameMode(::StringW  gameMode, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestPartyGameModeWrapped, addr 0x5bc3468, size 0x4d0, virtual false, abstract: false, final false
inline void RequestPartyGameModeWrapped(::StringW  gameMode, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method SendAboutToGroupJoin, addr 0x5bc01e8, size 0x6c8, virtual false, abstract: false, final false
inline void SendAboutToGroupJoin() ;

/// @brief Method SendPartyFormedRPC, addr 0x5bbf1d8, size 0x638, virtual false, abstract: false, final false
inline void SendPartyFormedRPC(int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs, bool  forceDebug) ;

/// @brief Method SendRequestPartyGameMode, addr 0x5bc2fac, size 0x44c, virtual false, abstract: false, final false
inline void SendRequestPartyGameMode(::StringW  gameMode) ;

/// @brief Method SendVerifyPartyMember, addr 0x5bc2be4, size 0xe0, virtual false, abstract: false, final false
inline void SendVerifyPartyMember(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SetNewParty, addr 0x5bc113c, size 0x6ec, virtual false, abstract: false, final false
inline void SetNewParty(::StringW  partyGameMode, int16_t  braceletColor, ::ArrayW<int32_t>  memberIDs) ;

/// @brief Method Tick, addr 0x5bbd0e0, size 0x100c, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UnpackColor, addr 0x5bc1a4c, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color UnpackColor(int16_t  data) ;

/// @brief Method UpdateProvisionalGroup, addr 0x5bbe0ec, size 0xe8c, virtual false, abstract: false, final false
inline void UpdateProvisionalGroup(::by_ref<::UnityEngine::Vector3>  midpoint) ;

/// @brief Method UpdateWarningSigns, addr 0x5bbf810, size 0x6c8, virtual false, abstract: false, final false
inline void UpdateWarningSigns() ;

/// [PunRPC]
/// @brief Method VerifyPartyMember, addr 0x5bc2cc4, size 0x60, virtual false, abstract: false, final false
inline void VerifyPartyMember(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method VerifyPartyMemberWrapped, addr 0x5bc2d24, size 0x288, virtual false, abstract: false, final false
inline void VerifyPartyMemberWrapped(::GlobalNamespace::PhotonMessageInfoWrapped  infoWrapped) ;

constexpr bool const& __cordl_internal_get_WillJoinLeftHanded() const;

constexpr bool& __cordl_internal_get_WillJoinLeftHanded() ;

constexpr bool const& __cordl_internal_get__DidJoinLeftHanded_k__BackingField() const;

constexpr bool& __cordl_internal_get__DidJoinLeftHanded_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__MyBraceletSelfIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MyBraceletSelfIndex_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& __cordl_internal_get__myBeadColors_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get__myBeadColors_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__myBraceletColor_k__BackingField() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__myBraceletColor_k__BackingField() ;

constexpr ::GlobalNamespace::GroupJoinZoneAB const& __cordl_internal_get__partyZone_k__BackingField() const;

constexpr ::GlobalNamespace::GroupJoinZoneAB& __cordl_internal_get__partyZone_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_aboutToGroupJoin_CooldownUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_aboutToGroupJoin_CooldownUntilTimestamp() ;

constexpr bool const& __cordl_internal_get_amFirstProvisionalPlayer() const;

constexpr bool& __cordl_internal_get_amFirstProvisionalPlayer() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::GlobalNamespace::GTColor_HSVRanges const& __cordl_internal_get_braceletRandomColorHSVRanges() const;

constexpr ::GlobalNamespace::GTColor_HSVRanges& __cordl_internal_get_braceletRandomColorHSVRanges() ;

constexpr float_t const& __cordl_internal_get_cooldownAfterCreatingGroup() const;

constexpr float_t& __cordl_internal_get_cooldownAfterCreatingGroup() ;

constexpr bool const& __cordl_internal_get_debug() const;

constexpr bool& __cordl_internal_get_debug() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_debugStr() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_debugStr() ;

constexpr float_t const& __cordl_internal_get_detectionRadius() const;

constexpr float_t& __cordl_internal_get_detectionRadius() ;

constexpr double_t const& __cordl_internal_get_failedToFollowRefreshPartyDelay() const;

constexpr double_t& __cordl_internal_get_failedToFollowRefreshPartyDelay() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_fistBumpInterruptedAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_fistBumpInterruptedAudio() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_friendshipBubble() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_friendshipBubble() ;

constexpr float_t const& __cordl_internal_get_groupCreateAfterTimestamp() const;

constexpr float_t& __cordl_internal_get_groupCreateAfterTimestamp() ;

constexpr float_t const& __cordl_internal_get_groupTime() const;

constexpr float_t& __cordl_internal_get_groupTime() ;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>* const& __cordl_internal_get_groupZoneCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>*& __cordl_internal_get_groupZoneCallbacks() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr double_t const& __cordl_internal_get_joinedRoomRefreshPartyDelay() const;

constexpr double_t& __cordl_internal_get_joinedRoomRefreshPartyDelay() ;

constexpr double_t const& __cordl_internal_get_lastFailedToFollowPartyTime() const;

constexpr double_t& __cordl_internal_get_lastFailedToFollowPartyTime() ;

constexpr double_t const& __cordl_internal_get_lastJoinedRoomTime() const;

constexpr double_t& __cordl_internal_get_lastJoinedRoomTime() ;

constexpr float_t const& __cordl_internal_get_m_maxGroupJoinTimeDifference() const;

constexpr float_t& __cordl_internal_get_m_maxGroupJoinTimeDifference() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_myPartyMemberIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_myPartyMemberIDs() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get_myPartyMembersHash() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get_myPartyMembersHash() ;

constexpr double_t const& __cordl_internal_get_offset() const;

constexpr double_t& __cordl_internal_get_offset() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystem() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>* const& __cordl_internal_get_partyMergeIDs() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*& __cordl_internal_get_partyMergeIDs() ;

constexpr float_t const& __cordl_internal_get_playEffectsAfterTimestamp() const;

constexpr float_t& __cordl_internal_get_playEffectsAfterTimestamp() ;

constexpr float_t const& __cordl_internal_get_playEffectsDelay() const;

constexpr float_t& __cordl_internal_get_playEffectsDelay() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_playersInProvisionalGroup() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_playersInProvisionalGroup() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>* const& __cordl_internal_get_playersMakingFists() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*& __cordl_internal_get_playersMakingFists() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>* const& __cordl_internal_get_playersToPropagateFrom() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*& __cordl_internal_get_playersToPropagateFrom() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_provisionalGroupUsingLeftHands() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_provisionalGroupUsingLeftHands() ;

constexpr float_t const& __cordl_internal_get_suppressPartyCreationUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_suppressPartyCreationUntilTimestamp() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_tempIntList() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_tempIntList() ;

constexpr bool const& __cordl_internal_get_wantsPartyRefreshPostFollowFailed() const;

constexpr bool& __cordl_internal_get_wantsPartyRefreshPostFollowFailed() ;

constexpr bool const& __cordl_internal_get_wantsPartyRefreshPostJoin() const;

constexpr bool& __cordl_internal_get_wantsPartyRefreshPostJoin() ;

constexpr void __cordl_internal_set_WillJoinLeftHanded(bool  value) ;

constexpr void __cordl_internal_set__DidJoinLeftHanded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MyBraceletSelfIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__myBeadColors_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__myBraceletColor_k__BackingField(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__partyZone_k__BackingField(::GlobalNamespace::GroupJoinZoneAB  value) ;

constexpr void __cordl_internal_set_aboutToGroupJoin_CooldownUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_amFirstProvisionalPlayer(bool  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_braceletRandomColorHSVRanges(::GlobalNamespace::GTColor_HSVRanges  value) ;

constexpr void __cordl_internal_set_cooldownAfterCreatingGroup(float_t  value) ;

constexpr void __cordl_internal_set_debug(bool  value) ;

constexpr void __cordl_internal_set_debugStr(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_detectionRadius(float_t  value) ;

constexpr void __cordl_internal_set_failedToFollowRefreshPartyDelay(double_t  value) ;

constexpr void __cordl_internal_set_fistBumpInterruptedAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_friendshipBubble(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_groupCreateAfterTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_groupTime(float_t  value) ;

constexpr void __cordl_internal_set_groupZoneCallbacks(::System::Collections::Generic::List_1<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>*  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_joinedRoomRefreshPartyDelay(double_t  value) ;

constexpr void __cordl_internal_set_lastFailedToFollowPartyTime(double_t  value) ;

constexpr void __cordl_internal_set_lastJoinedRoomTime(double_t  value) ;

constexpr void __cordl_internal_set_m_maxGroupJoinTimeDifference(float_t  value) ;

constexpr void __cordl_internal_set_myPartyMemberIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_myPartyMembersHash(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_offset(double_t  value) ;

constexpr void __cordl_internal_set_particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_partyMergeIDs(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*  value) ;

constexpr void __cordl_internal_set_playEffectsAfterTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_playEffectsDelay(float_t  value) ;

constexpr void __cordl_internal_set_playersInProvisionalGroup(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_playersMakingFists(::System::Collections::Generic::List_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*  value) ;

constexpr void __cordl_internal_set_playersToPropagateFrom(::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*  value) ;

constexpr void __cordl_internal_set_provisionalGroupUsingLeftHands(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_suppressPartyCreationUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_tempIntList(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_wantsPartyRefreshPostFollowFailed(bool  value) ;

constexpr void __cordl_internal_set_wantsPartyRefreshPostJoin(bool  value) ;

/// @brief Method .ctor, addr 0x5bc3ddc, size 0x314, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTagScripts::FriendshipGroupDetection> getStaticF__Instance_k__BackingField() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_profiler_Tick() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_profiler_updateProvisionalGroup() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>* getStaticF_tempColorLookup() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* getStaticF_userIdLookup() ;

/// [CompilerGenerated]
/// @brief Method get_DidJoinLeftHanded, addr 0x5bbd0d0, size 0x8, virtual false, abstract: false, final false
inline bool get_DidJoinLeftHanded() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5bbbea4, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTagScripts::FriendshipGroupDetection> get_Instance() ;

/// @brief Method get_IsInParty, addr 0x5bbbfa4, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInParty() ;

/// [CompilerGenerated]
/// @brief Method get_MyBraceletSelfIndex, addr 0x5bbbf8c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MyBraceletSelfIndex() ;

/// @brief Method get_PartyMemberIDs, addr 0x5bbbf9c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_PartyMemberIDs() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5bbbfc4, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method get_myBeadColors, addr 0x5bbbf64, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Color>* get_myBeadColors() ;

/// [CompilerGenerated]
/// @brief Method get_myBraceletColor, addr 0x5bbbf74, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_myBraceletColor() ;

/// [CompilerGenerated]
/// @brief Method get_partyZone, addr 0x5bbbfb4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GroupJoinZoneAB get_partyZone() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::FriendshipGroupDetection>  value) ;

static inline void setStaticF_profiler_Tick(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_profiler_updateProvisionalGroup(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_tempColorLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Color>*  value) ;

static inline void setStaticF_userIdLookup(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DidJoinLeftHanded, addr 0x5bbd0d8, size 0x8, virtual false, abstract: false, final false
inline void set_DidJoinLeftHanded(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5bbbefc, size 0x68, virtual false, abstract: false, final false
static inline void set_Instance(::GorillaTagScripts::FriendshipGroupDetection*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MyBraceletSelfIndex, addr 0x5bbbf94, size 0x8, virtual false, abstract: false, final false
inline void set_MyBraceletSelfIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5bbbfcc, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_myBeadColors, addr 0x5bbbf6c, size 0x8, virtual false, abstract: false, final false
inline void set_myBeadColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_myBraceletColor, addr 0x5bbbf80, size 0xc, virtual false, abstract: false, final false
inline void set_myBraceletColor(::UnityEngine::Color  value) ;

/// [CompilerGenerated]
/// @brief Method set_partyZone, addr 0x5bbbfbc, size 0x8, virtual false, abstract: false, final false
inline void set_partyZone(::GlobalNamespace::GroupJoinZoneAB  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FriendshipGroupDetection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FriendshipGroupDetection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FriendshipGroupDetection(FriendshipGroupDetection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FriendshipGroupDetection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FriendshipGroupDetection(FriendshipGroupDetection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3978};

/// [SerializeField]
/// @brief Field detectionRadius, offset: 0x50, size: 0x4, def value: None
 float_t  ___detectionRadius;

/// [SerializeField]
/// @brief Field groupTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___groupTime;

/// [SerializeField]
/// @brief Field cooldownAfterCreatingGroup, offset: 0x58, size: 0x4, def value: None
 float_t  ___cooldownAfterCreatingGroup;

/// [SerializeField]
/// @brief Field hapticStrength, offset: 0x5c, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// [SerializeField]
/// @brief Field hapticDuration, offset: 0x60, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// [SerializeField]
/// @brief Field joinedRoomRefreshPartyDelay, offset: 0x68, size: 0x8, def value: None
 double_t  ___joinedRoomRefreshPartyDelay;

/// [SerializeField]
/// @brief Field failedToFollowRefreshPartyDelay, offset: 0x70, size: 0x8, def value: None
 double_t  ___failedToFollowRefreshPartyDelay;

/// @brief Field debug, offset: 0x78, size: 0x1, def value: None
 bool  ___debug;

/// @brief Field offset, offset: 0x80, size: 0x8, def value: None
 double_t  ___offset;

/// [SerializeField]
/// @brief Field m_maxGroupJoinTimeDifference, offset: 0x88, size: 0x4, def value: None
 float_t  ___m_maxGroupJoinTimeDifference;

/// @brief Field myPartyMemberIDs, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___myPartyMemberIDs;

/// @brief Field myPartyMembersHash, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ___myPartyMembersHash;

/// [CompilerGenerated]
/// @brief Field <myBeadColors>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color>*  ____myBeadColors_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <myBraceletColor>k__BackingField, offset: 0xa8, size: 0x10, def value: None
 ::UnityEngine::Color  ____myBraceletColor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MyBraceletSelfIndex>k__BackingField, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____MyBraceletSelfIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <partyZone>k__BackingField, offset: 0xbc, size: 0x8, def value: None
 ::GlobalNamespace::GroupJoinZoneAB  ____partyZone_k__BackingField;

/// @brief Field groupZoneCallbacks, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Action_1<::GlobalNamespace::GroupJoinZoneAB>*>*  ___groupZoneCallbacks;

/// [SerializeField]
/// @brief Field braceletRandomColorHSVRanges, offset: 0xd0, size: 0x18, def value: None
 ::GlobalNamespace::GTColor_HSVRanges  ___braceletRandomColorHSVRanges;

/// @brief Field friendshipBubble, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___friendshipBubble;

/// @brief Field fistBumpInterruptedAudio, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___fistBumpInterruptedAudio;

/// @brief Field particleSystem, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystem;

/// @brief Field audioSource, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field lastJoinedRoomTime, offset: 0x108, size: 0x8, def value: None
 double_t  ___lastJoinedRoomTime;

/// @brief Field wantsPartyRefreshPostJoin, offset: 0x110, size: 0x1, def value: None
 bool  ___wantsPartyRefreshPostJoin;

/// @brief Field lastFailedToFollowPartyTime, offset: 0x118, size: 0x8, def value: None
 double_t  ___lastFailedToFollowPartyTime;

/// @brief Field wantsPartyRefreshPostFollowFailed, offset: 0x120, size: 0x1, def value: None
 bool  ___wantsPartyRefreshPostFollowFailed;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x121, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field playersToPropagateFrom, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*  ___playersToPropagateFrom;

/// @brief Field playersInProvisionalGroup, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___playersInProvisionalGroup;

/// @brief Field provisionalGroupUsingLeftHands, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___provisionalGroupUsingLeftHands;

/// @brief Field tempIntList, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___tempIntList;

/// @brief Field amFirstProvisionalPlayer, offset: 0x148, size: 0x1, def value: None
 bool  ___amFirstProvisionalPlayer;

/// @brief Field partyMergeIDs, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<int32_t>>*  ___partyMergeIDs;

/// @brief Field groupCreateAfterTimestamp, offset: 0x158, size: 0x4, def value: None
 float_t  ___groupCreateAfterTimestamp;

/// @brief Field playEffectsAfterTimestamp, offset: 0x15c, size: 0x4, def value: None
 float_t  ___playEffectsAfterTimestamp;

/// [SerializeField]
/// @brief Field playEffectsDelay, offset: 0x160, size: 0x4, def value: None
 float_t  ___playEffectsDelay;

/// @brief Field suppressPartyCreationUntilTimestamp, offset: 0x164, size: 0x4, def value: None
 float_t  ___suppressPartyCreationUntilTimestamp;

/// [CompilerGenerated]
/// @brief Field <DidJoinLeftHanded>k__BackingField, offset: 0x168, size: 0x1, def value: None
 bool  ____DidJoinLeftHanded_k__BackingField;

/// @brief Field WillJoinLeftHanded, offset: 0x169, size: 0x1, def value: None
 bool  ___WillJoinLeftHanded;

/// @brief Field playersMakingFists, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FriendshipGroupDetection_PlayerFist>*  ___playersMakingFists;

/// @brief Field debugStr, offset: 0x178, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___debugStr;

/// @brief Field aboutToGroupJoin_CooldownUntilTimestamp, offset: 0x180, size: 0x4, def value: None
 float_t  ___aboutToGroupJoin_CooldownUntilTimestamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___detectionRadius) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___groupTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___cooldownAfterCreatingGroup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___hapticStrength) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___hapticDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___joinedRoomRefreshPartyDelay) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___failedToFollowRefreshPartyDelay) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___debug) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___offset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___m_maxGroupJoinTimeDifference) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___myPartyMemberIDs) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___myPartyMembersHash) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ____myBeadColors_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ____myBraceletColor_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ____MyBraceletSelfIndex_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ____partyZone_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___groupZoneCallbacks) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___braceletRandomColorHSVRanges) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___friendshipBubble) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___fistBumpInterruptedAudio) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___particleSystem) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___audioSource) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___lastJoinedRoomTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___wantsPartyRefreshPostJoin) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___lastFailedToFollowPartyTime) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___wantsPartyRefreshPostFollowFailed) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ____TickRunning_k__BackingField) == 0x121, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___playersToPropagateFrom) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___playersInProvisionalGroup) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___provisionalGroupUsingLeftHands) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___tempIntList) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___amFirstProvisionalPlayer) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___partyMergeIDs) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___groupCreateAfterTimestamp) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___playEffectsAfterTimestamp) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___playEffectsDelay) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___suppressPartyCreationUntilTimestamp) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ____DidJoinLeftHanded_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___WillJoinLeftHanded) == 0x169, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___playersMakingFists) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___debugStr) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::FriendshipGroupDetection, ___aboutToGroupJoin_CooldownUntilTimestamp) == 0x180, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::FriendshipGroupDetection) == 0x188, "Size mismatch!");

} // namespace end def GorillaTagScripts
