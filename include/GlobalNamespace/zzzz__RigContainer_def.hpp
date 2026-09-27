#pragma once
// IWYU pragma private; include "GlobalNamespace/RigContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerStatsReadonly_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_MuteReason_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RigContainer)
namespace GlobalNamespace {
class LCKSocialCameraFollower;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class NetworkView;
}
namespace GlobalNamespace {
struct PlayerStatsReadonly;
}
namespace GlobalNamespace {
struct RigContainer_MuteReason;
}
namespace GlobalNamespace {
class RigContainer__QueueAutomute_d__71;
}
namespace GlobalNamespace {
class RigContainer___c;
}
namespace GlobalNamespace {
class VRRigEvents;
}
namespace GlobalNamespace {
class VRRigReliableState;
}
namespace GlobalNamespace {
class VRRigSerializer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Audio {
class LoudSpeakerNetwork;
}
namespace Photon::Voice::PUN {
class PhotonVoiceView;
}
namespace PlayFab::CloudScriptModels {
class ExecuteFunctionResult;
}
namespace PlayFab {
class PlayFabError;
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
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class RigContainer__QueueAutomute_d__71;
}
namespace GlobalNamespace {
class RigContainer___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RigContainer*);
MARK_REF_T(::GlobalNamespace::RigContainer__QueueAutomute_d__71*);
MARK_REF_T(::GlobalNamespace::RigContainer___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigContainer*, "", "RigContainer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigContainer__QueueAutomute_d__71*, "", "RigContainer/<QueueAutomute>d__71");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RigContainer___c*, "", "RigContainer/<>c");
// [RequireComponent(typeof(VRRig), typeof(VRRigReliableState))]
// Dependencies PlayerStatsReadonly, RigContainer::MuteReason, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigContainer
class CORDL_TYPE RigContainer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MuteReason = ::GlobalNamespace::RigContainer_MuteReason;

using _QueueAutomute_d__71 = ::GlobalNamespace::RigContainer__QueueAutomute_d__71;

using __c = ::GlobalNamespace::RigContainer___c;

 __declspec(property(get=get_BodyCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  BodyCollider;

 __declspec(property(get=get_CachedNetViewID)) int32_t  CachedNetViewID;

 __declspec(property(get=get_Creator, put=set_Creator)) ::GlobalNamespace::NetPlayer*  Creator;

 __declspec(property(get=get_HeadCollider)) ::UnityW<::UnityEngine::SphereCollider>  HeadCollider;

 __declspec(property(get=get_Initialized, put=set_Initialized)) bool  Initialized;

 __declspec(property(get=get_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_LCKTabletFollower)) ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  LCKTabletFollower;

 __declspec(property(get=get_LckCococamFollower)) ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  LckCococamFollower;

 __declspec(property(get=get_LoudSpeakerNetworks)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>*  LoudSpeakerNetworks;

 __declspec(property(get=get_PlayerStats, put=set_PlayerStats)) ::GlobalNamespace::PlayerStatsReadonly  PlayerStats;

 __declspec(property(get=get_ReliableState)) ::UnityW<::GlobalNamespace::VRRigReliableState>  ReliableState;

 __declspec(property(get=get_ReplacementVoiceSource)) ::UnityW<::UnityEngine::AudioSource>  ReplacementVoiceSource;

 __declspec(property(get=get_Rig)) ::UnityW<::GlobalNamespace::VRRig>  Rig;

 __declspec(property(get=get_RigEvents)) ::UnityW<::GlobalNamespace::VRRigEvents>  RigEvents;

 __declspec(property(get=get_SpeakerHead)) ::UnityW<::UnityEngine::Transform>  SpeakerHead;

 __declspec(property(get=get_Voice, put=set_Voice)) ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  Voice;

/// @brief Field <Initialized>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__Initialized_k__BackingField, put=__cordl_internal_set__Initialized_k__BackingField)) bool  _Initialized_k__BackingField;

/// @brief Field automuteQueued, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_automuteQueued, put=setStaticF_automuteQueued)) bool  automuteQueued;

/// @brief Field bodyCollider, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollider, put=__cordl_internal_set_bodyCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  bodyCollider;

/// @brief Field hasManualMute, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasManualMute, put=__cordl_internal_set_hasManualMute)) bool  hasManualMute;

/// @brief Field headCollider, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_headCollider, put=__cordl_internal_set_headCollider)) ::UnityW<::UnityEngine::SphereCollider>  headCollider;

/// @brief Field loudSpeakerNetworks, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_loudSpeakerNetworks, put=__cordl_internal_set_loudSpeakerNetworks)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>*  loudSpeakerNetworks;

/// @brief Field m_cachedNetViewID, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_cachedNetViewID, put=__cordl_internal_set_m_cachedNetViewID)) int32_t  m_cachedNetViewID;

/// @brief Field m_lckCococamFollower, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_lckCococamFollower, put=__cordl_internal_set_m_lckCococamFollower)) ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  m_lckCococamFollower;

/// @brief Field m_lckTablet, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_lckTablet, put=__cordl_internal_set_m_lckTablet)) ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  m_lckTablet;

/// @brief Field m_playerStats, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_playerStats, put=__cordl_internal_set_m_playerStats)) ::GlobalNamespace::PlayerStatsReadonly  m_playerStats;

/// @brief Field muteReasons, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_muteReasons, put=__cordl_internal_set_muteReasons)) ::GlobalNamespace::RigContainer_MuteReason  muteReasons;

 __declspec(property(get=get_netView)) ::UnityW<::GlobalNamespace::NetworkView>  netView;

/// @brief Field playerChatQuality, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerChatQuality, put=__cordl_internal_set_playerChatQuality)) int32_t  playerChatQuality;

/// @brief Field playersToCheckAutomute, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_playersToCheckAutomute, put=setStaticF_playersToCheckAutomute)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  playersToCheckAutomute;

/// @brief Field reliableState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableState, put=__cordl_internal_set_reliableState)) ::UnityW<::GlobalNamespace::VRRigReliableState>  reliableState;

/// @brief Field replacementVoiceSource, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_replacementVoiceSource, put=__cordl_internal_set_replacementVoiceSource)) ::UnityW<::UnityEngine::AudioSource>  replacementVoiceSource;

/// @brief Field requestedAutomutePlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_requestedAutomutePlayers, put=setStaticF_requestedAutomutePlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  requestedAutomutePlayers;

/// @brief Field rigEvents, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigEvents, put=__cordl_internal_set_rigEvents)) ::UnityW<::GlobalNamespace::VRRigEvents>  rigEvents;

/// @brief Field speakerHead, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_speakerHead, put=__cordl_internal_set_speakerHead)) ::UnityW<::UnityEngine::Transform>  speakerHead;

/// @brief Field staticTempRC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_staticTempRC, put=setStaticF_staticTempRC)) ::UnityW<::GlobalNamespace::RigContainer>  staticTempRC;

/// @brief Field voiceView, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceView, put=__cordl_internal_set_voiceView)) ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  voiceView;

/// @brief Field vrrig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrrig, put=__cordl_internal_set_vrrig)) ::UnityW<::GlobalNamespace::VRRig>  vrrig;

/// @brief Field waitingForAutomuteCallback, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_waitingForAutomuteCallback, put=setStaticF_waitingForAutomuteCallback)) bool  waitingForAutomuteCallback;

/// @brief Method AddLoudSpeakerNetwork, addr 0x58f8cc4, size 0xe4, virtual false, abstract: false, final false
inline void AddLoudSpeakerNetwork(::GorillaTag::Audio::LoudSpeakerNetwork*  network) ;

/// @brief Method Awake, addr 0x58f77bc, size 0x7c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelAutomuteRequest, addr 0x58f7ba4, size 0x100, virtual false, abstract: false, final false
static inline void CancelAutomuteRequest() ;

/// @brief Method GetIsPlayerAutoMuted, addr 0x58f76dc, size 0xc, virtual false, abstract: false, final false
inline bool GetIsPlayerAutoMuted() ;

/// @brief Method InitializeNetwork, addr 0x58f7e10, size 0x10c, virtual false, abstract: false, final false
inline void InitializeNetwork(::GlobalNamespace::NetworkView*  netView, ::Photon::Voice::PUN::PhotonVoiceView*  voiceView, ::GlobalNamespace::VRRigSerializer*  vrRigSerializer) ;

/// @brief Method InitializeNetwork_Shared, addr 0x58f7f1c, size 0x4ec, virtual false, abstract: false, final false
inline void InitializeNetwork_Shared(::GlobalNamespace::NetworkView*  netView, ::GlobalNamespace::VRRigSerializer*  vrRigSerializer) ;

/// @brief Method IsMutedFor, addr 0x58f74ec, size 0x10, virtual false, abstract: false, final false
inline bool IsMutedFor(::GlobalNamespace::RigContainer_MuteReason  reasons) ;

static inline ::GlobalNamespace::RigContainer* New_ctor() ;

/// @brief Method OnDisable, addr 0x58f7ca4, size 0x16c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnMultiPlayerStarted, addr 0x58f7a98, size 0x9c, virtual false, abstract: false, final false
inline void OnMultiPlayerStarted() ;

/// @brief Method OnReturnedToSinglePlayer, addr 0x58f7b34, size 0x70, virtual false, abstract: false, final false
inline void OnReturnedToSinglePlayer() ;

/// @brief Method ProcessAutomute, addr 0x58f8c38, size 0x8c, virtual false, abstract: false, final false
inline void ProcessAutomute() ;

/// [IteratorStateMachine(typeof(RigContainer::<QueueAutomute>d__71))]
/// @brief Method QueueAutomute, addr 0x58f8408, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* QueueAutomute(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ReceiveAutomuteSettings, addr 0x58f8b3c, size 0xfc, virtual false, abstract: false, final false
static inline void ReceiveAutomuteSettings(::GlobalNamespace::NetPlayer*  player, ::StringW  score) ;

/// @brief Method RefreshAllRigVoices, addr 0x58f8e00, size 0x26c, virtual false, abstract: false, final false
static inline void RefreshAllRigVoices() ;

/// @brief Method RefreshVoiceChat, addr 0x58f7334, size 0x188, virtual false, abstract: false, final false
inline void RefreshVoiceChat() ;

/// @brief Method RemoveLoudSpeakerNetwork, addr 0x58f8da8, size 0x58, virtual false, abstract: false, final false
inline void RemoveLoudSpeakerNetwork(::GorillaTag::Audio::LoudSpeakerNetwork*  network) ;

/// @brief Method RequestAutomuteSettings, addr 0x58f849c, size 0x6a0, virtual false, abstract: false, final false
static inline void RequestAutomuteSettings() ;

/// @brief Method RigPostEnable, addr 0x58f7a80, size 0x18, virtual false, abstract: false, final false
inline void RigPostEnable(::GlobalNamespace::RigContainer*  _) ;

/// @brief Method SetMuted, addr 0x58f6f58, size 0x28, virtual false, abstract: false, final false
inline void SetMuted(::GlobalNamespace::RigContainer_MuteReason  reasons, bool  muted) ;

/// @brief Method Start, addr 0x58f7838, size 0x248, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateAutomuteLevel, addr 0x58f76e8, size 0xd4, virtual false, abstract: false, final false
inline void UpdateAutomuteLevel(::StringW  autoMuteLevel) ;

/// @brief Method WithReasons, addr 0x58f74fc, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::RigContainer_MuteReason WithReasons(::GlobalNamespace::RigContainer_MuteReason  reasons, bool  muted) ;

constexpr bool const& __cordl_internal_get__Initialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__Initialized_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_bodyCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_bodyCollider() ;

constexpr bool const& __cordl_internal_get_hasManualMute() const;

constexpr bool& __cordl_internal_get_hasManualMute() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_headCollider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_headCollider() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>* const& __cordl_internal_get_loudSpeakerNetworks() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>*& __cordl_internal_get_loudSpeakerNetworks() ;

constexpr int32_t const& __cordl_internal_get_m_cachedNetViewID() const;

constexpr int32_t& __cordl_internal_get_m_cachedNetViewID() ;

constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> const& __cordl_internal_get_m_lckCococamFollower() const;

constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>& __cordl_internal_get_m_lckCococamFollower() ;

constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> const& __cordl_internal_get_m_lckTablet() const;

constexpr ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>& __cordl_internal_get_m_lckTablet() ;

constexpr ::GlobalNamespace::PlayerStatsReadonly const& __cordl_internal_get_m_playerStats() const;

constexpr ::GlobalNamespace::PlayerStatsReadonly& __cordl_internal_get_m_playerStats() ;

constexpr ::GlobalNamespace::RigContainer_MuteReason const& __cordl_internal_get_muteReasons() const;

constexpr ::GlobalNamespace::RigContainer_MuteReason& __cordl_internal_get_muteReasons() ;

constexpr int32_t const& __cordl_internal_get_playerChatQuality() const;

constexpr int32_t& __cordl_internal_get_playerChatQuality() ;

constexpr ::UnityW<::GlobalNamespace::VRRigReliableState> const& __cordl_internal_get_reliableState() const;

constexpr ::UnityW<::GlobalNamespace::VRRigReliableState>& __cordl_internal_get_reliableState() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_replacementVoiceSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_replacementVoiceSource() ;

constexpr ::UnityW<::GlobalNamespace::VRRigEvents> const& __cordl_internal_get_rigEvents() const;

constexpr ::UnityW<::GlobalNamespace::VRRigEvents>& __cordl_internal_get_rigEvents() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_speakerHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_speakerHead() ;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView> const& __cordl_internal_get_voiceView() const;

constexpr ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>& __cordl_internal_get_voiceView() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_vrrig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_vrrig() ;

constexpr void __cordl_internal_set__Initialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_hasManualMute(bool  value) ;

constexpr void __cordl_internal_set_headCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

constexpr void __cordl_internal_set_loudSpeakerNetworks(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>*  value) ;

constexpr void __cordl_internal_set_m_cachedNetViewID(int32_t  value) ;

constexpr void __cordl_internal_set_m_lckCococamFollower(::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  value) ;

constexpr void __cordl_internal_set_m_lckTablet(::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  value) ;

constexpr void __cordl_internal_set_m_playerStats(::GlobalNamespace::PlayerStatsReadonly  value) ;

constexpr void __cordl_internal_set_muteReasons(::GlobalNamespace::RigContainer_MuteReason  value) ;

constexpr void __cordl_internal_set_playerChatQuality(int32_t  value) ;

constexpr void __cordl_internal_set_reliableState(::UnityW<::GlobalNamespace::VRRigReliableState>  value) ;

constexpr void __cordl_internal_set_replacementVoiceSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_rigEvents(::UnityW<::GlobalNamespace::VRRigEvents>  value) ;

constexpr void __cordl_internal_set_speakerHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_voiceView(::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  value) ;

constexpr void __cordl_internal_set_vrrig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x58f906c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_automuteQueued() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* getStaticF_playersToCheckAutomute() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* getStaticF_requestedAutomutePlayers() ;

static inline ::UnityW<::GlobalNamespace::RigContainer> getStaticF_staticTempRC() ;

static inline bool getStaticF_waitingForAutomuteCallback() ;

/// @brief Method get_BodyCollider, addr 0x58f75a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::CapsuleCollider> get_BodyCollider() ;

/// @brief Method get_CachedNetViewID, addr 0x58f74d4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CachedNetViewID() ;

/// @brief Method get_Creator, addr 0x58f7514, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetPlayer* get_Creator() ;

/// @brief Method get_HeadCollider, addr 0x58f7598, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::SphereCollider> get_HeadCollider() ;

/// [CompilerGenerated]
/// @brief Method get_Initialized, addr 0x58f7200, size 0x8, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_IsMuted, addr 0x58f74dc, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMuted() ;

/// @brief Method get_LCKTabletFollower, addr 0x58f7240, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> get_LCKTabletFollower() ;

/// @brief Method get_LckCococamFollower, addr 0x58f7238, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LCKSocialCameraFollower> get_LckCococamFollower() ;

/// @brief Method get_LoudSpeakerNetworks, addr 0x58f7230, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>* get_LoudSpeakerNetworks() ;

/// @brief Method get_PlayerStats, addr 0x58f75b0, size 0x120, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerStatsReadonly get_PlayerStats() ;

/// @brief Method get_ReliableState, addr 0x58f7218, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRigReliableState> get_ReliableState() ;

/// @brief Method get_ReplacementVoiceSource, addr 0x58f7228, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> get_ReplacementVoiceSource() ;

/// @brief Method get_Rig, addr 0x58f7210, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_Rig() ;

/// @brief Method get_RigEvents, addr 0x58f75a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRigEvents> get_RigEvents() ;

/// @brief Method get_SpeakerHead, addr 0x58f7220, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_SpeakerHead() ;

/// @brief Method get_Voice, addr 0x58f7248, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::PUN::PhotonVoiceView> get_Voice() ;

/// @brief Method get_netView, addr 0x58f74bc, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::NetworkView> get_netView() ;

static inline void setStaticF_automuteQueued(bool  value) ;

static inline void setStaticF_playersToCheckAutomute(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_requestedAutomutePlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF_staticTempRC(::UnityW<::GlobalNamespace::RigContainer>  value) ;

static inline void setStaticF_waitingForAutomuteCallback(bool  value) ;

/// @brief Method set_Creator, addr 0x58f752c, size 0x6c, virtual false, abstract: false, final false
inline void set_Creator(::GlobalNamespace::NetPlayer*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Initialized, addr 0x58f7208, size 0x8, virtual false, abstract: false, final false
inline void set_Initialized(bool  value) ;

/// @brief Method set_PlayerStats, addr 0x58f76d0, size 0xc, virtual false, abstract: false, final false
inline void set_PlayerStats(::GlobalNamespace::PlayerStatsReadonly  value) ;

/// @brief Method set_Voice, addr 0x58f7250, size 0xe4, virtual false, abstract: false, final false
inline void set_Voice(::Photon::Voice::PUN::PhotonVoiceView*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigContainer(RigContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigContainer(RigContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2135};

/// [CompilerGenerated]
/// @brief Field <Initialized>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____Initialized_k__BackingField;

/// [SerializeField]
/// @brief Field vrrig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___vrrig;

/// [SerializeField]
/// @brief Field reliableState, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigReliableState>  ___reliableState;

/// [SerializeField]
/// @brief Field speakerHead, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___speakerHead;

/// [SerializeField]
/// @brief Field replacementVoiceSource, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___replacementVoiceSource;

/// @brief Field loudSpeakerNetworks, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Audio::LoudSpeakerNetwork>>*  ___loudSpeakerNetworks;

/// [SerializeField]
/// @brief Field m_lckCococamFollower, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  ___m_lckCococamFollower;

/// [SerializeField]
/// @brief Field m_lckTablet, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LCKSocialCameraFollower>  ___m_lckTablet;

/// @brief Field voiceView, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::PUN::PhotonVoiceView>  ___voiceView;

/// @brief Field m_cachedNetViewID, offset: 0x68, size: 0x4, def value: None
 int32_t  ___m_cachedNetViewID;

/// @brief Field muteReasons, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::RigContainer_MuteReason  ___muteReasons;

/// [SerializeField]
/// @brief Field headCollider, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___headCollider;

/// [SerializeField]
/// @brief Field bodyCollider, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___bodyCollider;

/// [SerializeField]
/// @brief Field rigEvents, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigEvents>  ___rigEvents;

/// @brief Field m_playerStats, offset: 0x88, size: 0xc, def value: None
 ::GlobalNamespace::PlayerStatsReadonly  ___m_playerStats;

/// @brief Field hasManualMute, offset: 0x94, size: 0x1, def value: None
 bool  ___hasManualMute;

/// @brief Field playerChatQuality, offset: 0x98, size: 0x4, def value: None
 int32_t  ___playerChatQuality;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigContainer, ____Initialized_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___vrrig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___reliableState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___speakerHead) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___replacementVoiceSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___loudSpeakerNetworks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___m_lckCococamFollower) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___m_lckTablet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___voiceView) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___m_cachedNetViewID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___muteReasons) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___headCollider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___bodyCollider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___rigEvents) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___m_playerStats) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___hasManualMute) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer, ___playerChatQuality) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigContainer) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigContainer/<QueueAutomute>d__71
class CORDL_TYPE RigContainer__QueueAutomute_d__71 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x58f9750, size 0x1cc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::RigContainer__QueueAutomute_d__71* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58f991c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x58f9924, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x58f995c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x58f974c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x58f8474, size 0x28, virtual false, abstract: false, final false
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
constexpr RigContainer__QueueAutomute_d__71() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigContainer__QueueAutomute_d__71", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigContainer__QueueAutomute_d__71(RigContainer__QueueAutomute_d__71 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigContainer__QueueAutomute_d__71", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigContainer__QueueAutomute_d__71(RigContainer__QueueAutomute_d__71 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2134};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RigContainer__QueueAutomute_d__71, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer__QueueAutomute_d__71, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RigContainer__QueueAutomute_d__71, ___player) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RigContainer__QueueAutomute_d__71) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RigContainer/<>c
class CORDL_TYPE RigContainer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::RigContainer___c*  __9;

/// @brief Field <>9__74_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__74_0, put=setStaticF___9__74_0)) ::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  __9__74_0;

/// @brief Field <>9__74_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__74_1, put=setStaticF___9__74_1)) ::System::Func_2<::GlobalNamespace::NetPlayer*,::StringW>*  __9__74_1;

/// @brief Field <>9__74_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__74_2, put=setStaticF___9__74_2)) ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  __9__74_2;

/// @brief Field <>9__74_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__74_3, put=setStaticF___9__74_3)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__74_3;

static inline ::GlobalNamespace::RigContainer___c* New_ctor() ;

/// @brief Method <RequestAutomuteSettings>b__74_0, addr 0x58f9198, size 0xc, virtual false, abstract: false, final false
inline bool _RequestAutomuteSettings_b__74_0(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method <RequestAutomuteSettings>b__74_1, addr 0x58f91a4, size 0x20, virtual false, abstract: false, final false
inline ::StringW _RequestAutomuteSettings_b__74_1(::GlobalNamespace::NetPlayer*  x) ;

/// @brief Method <RequestAutomuteSettings>b__74_2, addr 0x58f91c4, size 0x3b0, virtual false, abstract: false, final false
inline void _RequestAutomuteSettings_b__74_2(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  result) ;

/// @brief Method <RequestAutomuteSettings>b__74_3, addr 0x58f9574, size 0x1d8, virtual false, abstract: false, final false
inline void _RequestAutomuteSettings_b__74_3(::PlayFab::PlayFabError*  error) ;

/// @brief Method .ctor, addr 0x58f9190, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RigContainer___c* getStaticF___9() ;

static inline ::System::Predicate_1<::GlobalNamespace::NetPlayer*>* getStaticF___9__74_0() ;

static inline ::System::Func_2<::GlobalNamespace::NetPlayer*,::StringW>* getStaticF___9__74_1() ;

static inline ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>* getStaticF___9__74_2() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__74_3() ;

static inline void setStaticF___9(::GlobalNamespace::RigContainer___c*  value) ;

static inline void setStaticF___9__74_0(::System::Predicate_1<::GlobalNamespace::NetPlayer*>*  value) ;

static inline void setStaticF___9__74_1(::System::Func_2<::GlobalNamespace::NetPlayer*,::StringW>*  value) ;

static inline void setStaticF___9__74_2(::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  value) ;

static inline void setStaticF___9__74_3(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RigContainer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RigContainer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RigContainer___c(RigContainer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RigContainer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RigContainer___c(RigContainer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2133};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RigContainer___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
