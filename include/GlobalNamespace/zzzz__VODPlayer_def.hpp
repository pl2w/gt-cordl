#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VODPlayer_State_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStreamSchedule_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VODPlayer)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
struct PlayerPrefFlags_Flag;
}
namespace GlobalNamespace {
class SharedDownloadableFileResult;
}
namespace GlobalNamespace {
struct VODPlayer_State;
}
namespace GlobalNamespace {
struct VODPlayer_VODHourlyStream;
}
namespace GlobalNamespace {
struct VODPlayer_VODNextStreamData;
}
namespace GlobalNamespace {
struct VODPlayer_VODStreamSchedule;
}
namespace GlobalNamespace {
struct VODPlayer_VODStream;
}
namespace GlobalNamespace {
struct VODPlayer__GetCachedFile_d__38;
}
namespace GlobalNamespace {
struct VODPlayer__OnEnable_d__24;
}
namespace GlobalNamespace {
struct VODPlayer__StartImagePlayback_d__48;
}
namespace GlobalNamespace {
struct VODPlayer__StartVideoPlayback_d__49;
}
namespace GlobalNamespace {
class VODPlayer___c__DisplayClass47_0;
}
namespace GlobalNamespace {
struct VODPlayer__waitOnServerTimeAndSchedule_d__26;
}
namespace GlobalNamespace {
struct VODStream_VODPlayer_VODStreamChannel;
}
namespace GlobalNamespace {
class VODTarget;
}
namespace KID::Model {
class Permission;
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
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace System {
struct DateTime;
}
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class VODPlayer;
}
namespace GlobalNamespace {
class VODPlayer___c__DisplayClass47_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VODPlayer*);
MARK_REF_T(::GlobalNamespace::VODPlayer___c__DisplayClass47_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODPlayer*, "", "VODPlayer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODPlayer___c__DisplayClass47_0*, "", "VODPlayer/<>c__DisplayClass47_0");
// Dependencies UnityEngine.MonoBehaviour, VODPlayer::State, VODPlayer::VODStream::VODStreamChannel, VODPlayer::VODStreamSchedule
namespace GlobalNamespace {
// Is value type: false
// CS Name: VODPlayer
class CORDL_TYPE VODPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::VODPlayer_State;

using VODHourlyStream = ::GlobalNamespace::VODPlayer_VODHourlyStream;

using VODNextStreamData = ::GlobalNamespace::VODPlayer_VODNextStreamData;

using VODStream = ::GlobalNamespace::VODPlayer_VODStream;

using VODStreamSchedule = ::GlobalNamespace::VODPlayer_VODStreamSchedule;

using _GetCachedFile_d__38 = ::GlobalNamespace::VODPlayer__GetCachedFile_d__38;

using _OnEnable_d__24 = ::GlobalNamespace::VODPlayer__OnEnable_d__24;

using _StartImagePlayback_d__48 = ::GlobalNamespace::VODPlayer__StartImagePlayback_d__48;

using _StartVideoPlayback_d__49 = ::GlobalNamespace::VODPlayer__StartVideoPlayback_d__49;

using __c__DisplayClass47_0 = ::GlobalNamespace::VODPlayer___c__DisplayClass47_0;

using _waitOnServerTimeAndSchedule_d__26 = ::GlobalNamespace::VODPlayer__waitOnServerTimeAndSchedule_d__26;

/// @brief Field OnCrash, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCrash, put=setStaticF_OnCrash)) ::System::Action*  OnCrash;

/// @brief Field _standbyMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__standbyMaterial, put=setStaticF__standbyMaterial)) ::UnityW<::UnityEngine::Material>  _standbyMaterial;

/// @brief Field audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field busyMaterial, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_busyMaterial, put=__cordl_internal_set_busyMaterial)) ::UnityW<::UnityEngine::Material>  busyMaterial;

/// @brief Field cache, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_cache, put=__cordl_internal_set_cache)) ::System::Collections::Generic::List_1<::StringW>*  cache;

/// @brief Field imageMaterial, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_imageMaterial, put=__cordl_internal_set_imageMaterial)) ::UnityW<::UnityEngine::Material>  imageMaterial;

/// @brief Field lastCheck, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCheck, put=__cordl_internal_set_lastCheck)) int32_t  lastCheck;

/// @brief Field playBackMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_playBackMaterial, put=__cordl_internal_set_playBackMaterial)) ::UnityW<::UnityEngine::Material>  playBackMaterial;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::UnityEngine::Video::VideoPlayer>  player;

/// @brief Field playerBusy, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerBusy, put=__cordl_internal_set_playerBusy)) bool  playerBusy;

/// @brief Field playerChannel, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerChannel, put=__cordl_internal_set_playerChannel)) ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  playerChannel;

/// @brief Field playerPrefMuted, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerPrefMuted, put=__cordl_internal_set_playerPrefMuted)) bool  playerPrefMuted;

/// @brief Field schedule, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_schedule, put=__cordl_internal_set_schedule)) ::GlobalNamespace::VODPlayer_VODStreamSchedule  schedule;

/// @brief Field standbyMaterial, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_standbyMaterial, put=__cordl_internal_set_standbyMaterial)) ::UnityW<::UnityEngine::Material>  standbyMaterial;

/// @brief Field state, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_state, put=setStaticF_state)) ::GlobalNamespace::VODPlayer_State  state;

/// @brief Field targets, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_targets, put=__cordl_internal_set_targets)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*  targets;

/// @brief Field tdGot, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_tdGot, put=__cordl_internal_set_tdGot)) int32_t  tdGot;

/// @brief Field titleDataKey, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleDataKey, put=__cordl_internal_set_titleDataKey)) ::ArrayW<::StringW>  titleDataKey;

/// @brief Field voiceChatPerm, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceChatPerm, put=__cordl_internal_set_voiceChatPerm)) ::KID::Model::Permission*  voiceChatPerm;

/// @brief Field voiceChatPermRequired, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceChatPermRequired, put=__cordl_internal_set_voiceChatPermRequired)) ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  voiceChatPermRequired;

/// @brief Field voiceChatPermRequiredList, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceChatPermRequiredList, put=__cordl_internal_set_voiceChatPermRequiredList)) ::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>*  voiceChatPermRequiredList;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x5c06e34, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckForCachedFile, addr 0x5c08c7c, size 0x1ec, virtual false, abstract: false, final false
inline bool CheckForCachedFile(::StringW  fileId, ::StringW  extension, ::by_ref<::StringW>  filePath) ;

/// [AsyncStateMachine(typeof(VODPlayer::<GetCachedFile>d__38))]
/// @brief Method GetCachedFile, addr 0x5c08e68, size 0x154, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetCachedFile(::StringW  url, ::StringW  fileId, ::StringW  extension) ;

/// @brief Method GetNextStream, addr 0x5c07408, size 0x184, virtual false, abstract: false, final false
inline ::GlobalNamespace::VODPlayer_VODNextStreamData GetNextStream(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ch) ;

/// @brief Method GetNextStream, addr 0x5c097a8, size 0x3b4, virtual false, abstract: false, final false
inline ::GlobalNamespace::VODPlayer_VODNextStreamData GetNextStream(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ch, ::System::DateTime  now) ;

/// @brief Method GetSchedule, addr 0x5c09b5c, size 0x180, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetSchedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  schedule, ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ch) ;

/// @brief Method GetSchedule, addr 0x5c09cdc, size 0x490, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetSchedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  schedule, ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ch, ::System::DateTime  now) ;

/// @brief Method GetSchedule, addr 0x5c0a16c, size 0x170, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel,::System::Collections::Generic::List_1<::StringW>*>* GetSchedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  schedule) ;

/// @brief Method GetSchedule, addr 0x5c0a2dc, size 0x56c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel,::System::Collections::Generic::List_1<::StringW>*>* GetSchedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  schedule, ::System::DateTime  now) ;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x5c08118, size 0x414, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

static inline ::GlobalNamespace::VODPlayer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c07e58, size 0x2c0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5c07b28, size 0x330, virtual false, abstract: false, final false
inline void OnDisable() ;

/// [AsyncStateMachine(typeof(VODPlayer::<OnEnable>d__24))]
/// @brief Method OnEnable, addr 0x5c06e8c, size 0xa8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayPreviouStream, addr 0x5c0758c, size 0x290, virtual false, abstract: false, final false
inline void PlayPreviouStream() ;

/// @brief Method PlayerPreFlagChange, addr 0x5c06f34, size 0x14, virtual false, abstract: false, final false
inline void PlayerPreFlagChange(::GlobalNamespace::PlayerPrefFlags_Flag  flag, bool  v) ;

/// @brief Method Player_loopPointReached, addr 0x5c079ec, size 0x13c, virtual false, abstract: false, final false
inline void Player_loopPointReached(::UnityEngine::Video::VideoPlayer*  source) ;

/// @brief Method PositionAudio, addr 0x5c0852c, size 0x3d4, virtual false, abstract: false, final false
inline void PositionAudio() ;

/// @brief Method Start, addr 0x5c08fbc, size 0x2f8, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(VODPlayer::<StartImagePlayback>d__48))]
/// @brief Method StartImagePlayback, addr 0x5c093c4, size 0x11c, virtual false, abstract: false, final false
inline void StartImagePlayback(::StringW  url, ::StringW  fileId, int32_t  duration, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch, double_t  time, ::StringW  cachedUrl) ;

/// @brief Method StartPlayback, addr 0x5c08900, size 0x2f4, virtual false, abstract: false, final false
inline void StartPlayback(::GlobalNamespace::VODPlayer_VODStream  str, double_t  time) ;

/// [AsyncStateMachine(typeof(VODPlayer::<StartVideoPlayback>d__49))]
/// @brief Method StartVideoPlayback, addr 0x5c092b4, size 0x110, virtual false, abstract: false, final false
inline void StartVideoPlayback(::StringW  url, ::StringW  fileId, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch, double_t  time, ::StringW  cachedUrl) ;

/// @brief Method VODTarget_AlertDisabled, addr 0x5c0781c, size 0x1d0, virtual false, abstract: false, final false
inline void VODTarget_AlertDisabled(::GlobalNamespace::VODTarget*  o) ;

/// @brief Method VODTarget_AlertEnabled, addr 0x5c07070, size 0x240, virtual false, abstract: false, final false
inline void VODTarget_AlertEnabled(::GlobalNamespace::VODTarget*  o) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_busyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_busyMaterial() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_cache() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_cache() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_imageMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_imageMaterial() ;

constexpr int32_t const& __cordl_internal_get_lastCheck() const;

constexpr int32_t& __cordl_internal_get_lastCheck() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_playBackMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_playBackMaterial() ;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& __cordl_internal_get_player() ;

constexpr bool const& __cordl_internal_get_playerBusy() const;

constexpr bool& __cordl_internal_get_playerBusy() ;

constexpr ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel const& __cordl_internal_get_playerChannel() const;

constexpr ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel& __cordl_internal_get_playerChannel() ;

constexpr bool const& __cordl_internal_get_playerPrefMuted() const;

constexpr bool& __cordl_internal_get_playerPrefMuted() ;

constexpr ::GlobalNamespace::VODPlayer_VODStreamSchedule const& __cordl_internal_get_schedule() const;

constexpr ::GlobalNamespace::VODPlayer_VODStreamSchedule& __cordl_internal_get_schedule() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_standbyMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_standbyMaterial() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>* const& __cordl_internal_get_targets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*& __cordl_internal_get_targets() ;

constexpr int32_t const& __cordl_internal_get_tdGot() const;

constexpr int32_t& __cordl_internal_get_tdGot() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_titleDataKey() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_titleDataKey() ;

constexpr ::KID::Model::Permission* const& __cordl_internal_get_voiceChatPerm() const;

constexpr ::KID::Model::Permission*& __cordl_internal_get_voiceChatPerm() ;

constexpr ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> const& __cordl_internal_get_voiceChatPermRequired() const;

constexpr ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>& __cordl_internal_get_voiceChatPermRequired() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>* const& __cordl_internal_get_voiceChatPermRequiredList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>*& __cordl_internal_get_voiceChatPermRequiredList() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_busyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_cache(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_imageMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_lastCheck(int32_t  value) ;

constexpr void __cordl_internal_set_playBackMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::UnityEngine::Video::VideoPlayer>  value) ;

constexpr void __cordl_internal_set_playerBusy(bool  value) ;

constexpr void __cordl_internal_set_playerChannel(::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  value) ;

constexpr void __cordl_internal_set_playerPrefMuted(bool  value) ;

constexpr void __cordl_internal_set_schedule(::GlobalNamespace::VODPlayer_VODStreamSchedule  value) ;

constexpr void __cordl_internal_set_standbyMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_targets(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*  value) ;

constexpr void __cordl_internal_set_tdGot(int32_t  value) ;

constexpr void __cordl_internal_set_titleDataKey(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_voiceChatPerm(::KID::Model::Permission*  value) ;

constexpr void __cordl_internal_set_voiceChatPermRequired(::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  value) ;

constexpr void __cordl_internal_set_voiceChatPermRequiredList(::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>*  value) ;

/// @brief Method .ctor, addr 0x5c0a848, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method getPriorityChannelArray, addr 0x5c072b0, size 0x158, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel> getPriorityChannelArray() ;

/// @brief Method getPriorityChannels, addr 0x5c08bf4, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>* getPriorityChannels() ;

/// @brief Method getStandby, addr 0x5c06ff0, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> getStandby(::GlobalNamespace::VODTarget*  o) ;

static inline ::System::Action* getStaticF_OnCrash() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF__standbyMaterial() ;

static inline ::GlobalNamespace::VODPlayer_State getStaticF_state() ;

/// @brief Method get_StandbyMaterial, addr 0x5c06dec, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_StandbyMaterial() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Method onTD, addr 0x5c094e0, size 0x22c, virtual false, abstract: false, final false
inline void onTD(::StringW  s) ;

/// @brief Method onTDError, addr 0x5c0970c, size 0x9c, virtual false, abstract: false, final false
inline void onTDError(::PlayFab::PlayFabError*  error) ;

static inline void setStaticF_OnCrash(::System::Action*  value) ;

static inline void setStaticF__standbyMaterial(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_state(::GlobalNamespace::VODPlayer_State  value) ;

/// [AsyncStateMachine(typeof(VODPlayer::<waitOnServerTimeAndSchedule>d__26))]
/// @brief Method waitOnServerTimeAndSchedule, addr 0x5c06f48, size 0xa8, virtual false, abstract: false, final false
inline void waitOnServerTimeAndSchedule() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VODPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VODPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VODPlayer(VODPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VODPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VODPlayer(VODPlayer const& ) = delete;

/// @brief Field PlayerPrefKey_Cache offset 0xffffffff size 0x8
static constexpr ::ConstString  PlayerPrefKey_Cache{u"_VODCache_"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{442};

/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoPlayer>  ___player;

/// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field schedule, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::VODPlayer_VODStreamSchedule  ___schedule;

/// [SerializeField]
/// @brief Field titleDataKey, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___titleDataKey;

/// [SerializeField]
/// @brief Field standbyMaterial, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___standbyMaterial;

/// [SerializeField]
/// @brief Field playBackMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___playBackMaterial;

/// [SerializeField]
/// @brief Field busyMaterial, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___busyMaterial;

/// [SerializeField]
/// @brief Field imageMaterial, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___imageMaterial;

/// [SerializeField]
/// @brief Field voiceChatPermRequired, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>  ___voiceChatPermRequired;

/// @brief Field targets, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*  ___targets;

/// @brief Field voiceChatPermRequiredList, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel>*  ___voiceChatPermRequiredList;

/// @brief Field lastCheck, offset: 0x78, size: 0x4, def value: None
 int32_t  ___lastCheck;

/// @brief Field cache, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___cache;

/// @brief Field playerBusy, offset: 0x88, size: 0x1, def value: None
 bool  ___playerBusy;

/// @brief Field playerChannel, offset: 0x8c, size: 0x4, def value: None
 ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ___playerChannel;

/// @brief Field tdGot, offset: 0x90, size: 0x4, def value: None
 int32_t  ___tdGot;

/// @brief Field voiceChatPerm, offset: 0x98, size: 0x8, def value: None
 ::KID::Model::Permission*  ___voiceChatPerm;

/// @brief Field playerPrefMuted, offset: 0xa0, size: 0x1, def value: None
 bool  ___playerPrefMuted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODPlayer, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___schedule) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___titleDataKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___standbyMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___playBackMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___busyMaterial) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___imageMaterial) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___voiceChatPermRequired) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___targets) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___voiceChatPermRequiredList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___lastCheck) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___cache) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___playerBusy) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___playerChannel) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___tdGot) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___voiceChatPerm) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer, ___playerPrefMuted) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODPlayer) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, VODPlayer::VODStream
namespace GlobalNamespace {
// Is value type: false
// CS Name: VODPlayer/<>c__DisplayClass47_0
class CORDL_TYPE VODPlayer___c__DisplayClass47_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::VODPlayer>  __4__this;

/// @brief Field str, offset 0x18, size 0x30 
 __declspec(property(get=__cordl_internal_get_str, put=__cordl_internal_set_str)) ::GlobalNamespace::VODPlayer_VODStream  str;

/// @brief Field time, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) double_t  time;

static inline ::GlobalNamespace::VODPlayer___c__DisplayClass47_0* New_ctor() ;

/// @brief Method <StartPlayback>b__0, addr 0x5d04b3c, size 0x50, virtual false, abstract: false, final false
inline void _StartPlayback_b__0(::GlobalNamespace::SharedDownloadableFileResult*  result) ;

/// @brief Method <StartPlayback>b__1, addr 0x5d04b8c, size 0x204, virtual false, abstract: false, final false
inline void _StartPlayback_b__1(::GlobalNamespace::MothershipError*  error, int32_t  status) ;

/// @brief Method <StartPlayback>b__2, addr 0x5d04d90, size 0x50, virtual false, abstract: false, final false
inline void _StartPlayback_b__2(::GlobalNamespace::SharedDownloadableFileResult*  result) ;

/// @brief Method <StartPlayback>b__3, addr 0x5d04de0, size 0x204, virtual false, abstract: false, final false
inline void _StartPlayback_b__3(::GlobalNamespace::MothershipError*  error, int32_t  status) ;

constexpr ::UnityW<::GlobalNamespace::VODPlayer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::VODPlayer>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::VODPlayer_VODStream const& __cordl_internal_get_str() const;

constexpr ::GlobalNamespace::VODPlayer_VODStream& __cordl_internal_get_str() ;

constexpr double_t const& __cordl_internal_get_time() const;

constexpr double_t& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::VODPlayer>  value) ;

constexpr void __cordl_internal_set_str(::GlobalNamespace::VODPlayer_VODStream  value) ;

constexpr void __cordl_internal_set_time(double_t  value) ;

/// @brief Method .ctor, addr 0x5d04b34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VODPlayer___c__DisplayClass47_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VODPlayer___c__DisplayClass47_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VODPlayer___c__DisplayClass47_0(VODPlayer___c__DisplayClass47_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VODPlayer___c__DisplayClass47_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VODPlayer___c__DisplayClass47_0(VODPlayer___c__DisplayClass47_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{436};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VODPlayer>  _____4__this;

/// @brief Field str, offset: 0x18, size: 0x30, def value: None
 ::GlobalNamespace::VODPlayer_VODStream  ___str;

/// @brief Field time, offset: 0x48, size: 0x8, def value: None
 double_t  ___time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODPlayer___c__DisplayClass47_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer___c__DisplayClass47_0, ___str) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VODPlayer___c__DisplayClass47_0, ___time) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODPlayer___c__DisplayClass47_0) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
