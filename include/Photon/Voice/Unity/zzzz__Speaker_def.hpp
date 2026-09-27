#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Speaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__PlaybackDelaySettings_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Speaker)
namespace Photon::Realtime {
class Player;
}
namespace Photon::Voice::Unity {
struct PlaybackDelaySettings;
}
namespace Photon::Voice::Unity {
class RemoteVoiceLink;
}
namespace Photon::Voice::Unity {
class Speaker___c__DisplayClass44_0;
}
namespace Photon::Voice {
class AudioOutDelayControl_PlayDelayConfig;
}
namespace Photon::Voice {
template<typename T>
class FrameOut_1;
}
namespace Photon::Voice {
template<typename T>
class IAudioOut_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class Speaker;
}
namespace Photon::Voice::Unity {
class Speaker___c__DisplayClass44_0;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::Speaker*);
MARK_REF_T(::Photon::Voice::Unity::Speaker___c__DisplayClass44_0*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::Speaker*, "Photon.Voice.Unity", "Speaker");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::Speaker___c__DisplayClass44_0*, "Photon.Voice.Unity", "Speaker/<>c__DisplayClass44_0");
// [RequireComponent(typeof(UnityEngine.AudioSource))]
// [AddComponentMenu("Photon Voice/Speaker")]
// [DisallowMultipleComponent]
// Dependencies Photon.Voice.Unity.PlaybackDelaySettings, Photon.Voice.Unity.VoiceComponent
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.Speaker
class CORDL_TYPE Speaker : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
using __c__DisplayClass44_0 = ::Photon::Voice::Unity::Speaker___c__DisplayClass44_0;

 __declspec(property(get=get_Actor, put=set_Actor)) ::Photon::Realtime::Player*  Actor;

/// @brief Field CustomAudioOutFactory, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomAudioOutFactory, put=__cordl_internal_set_CustomAudioOutFactory)) ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>*  CustomAudioOutFactory;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_IsLinked)) bool  IsLinked;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_Lag)) int32_t  Lag;

 __declspec(property(get=get_OnRemoteVoiceRemoveAction, put=set_OnRemoteVoiceRemoveAction)) ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  OnRemoteVoiceRemoveAction;

/// @brief [Obsolete("Use SetPlaybackDelaySettings methods instead")]
 __declspec(property(get=get_PlayDelayMs, put=set_PlayDelayMs)) int32_t  PlayDelayMs;

 __declspec(property(get=get_PlaybackDelayMaxHard)) int32_t  PlaybackDelayMaxHard;

 __declspec(property(get=get_PlaybackDelayMaxSoft)) int32_t  PlaybackDelayMaxSoft;

 __declspec(property(get=get_PlaybackDelayMinSoft)) int32_t  PlaybackDelayMinSoft;

 __declspec(property(get=get_PlaybackOnlyWhenEnabled, put=set_PlaybackOnlyWhenEnabled)) bool  PlaybackOnlyWhenEnabled;

 __declspec(property(get=get_PlaybackStarted, put=set_PlaybackStarted)) bool  PlaybackStarted;

 __declspec(property(get=get_RemoteVoiceLink)) ::Photon::Voice::Unity::RemoteVoiceLink*  RemoteVoiceLink;

/// @brief Field <Actor>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Actor_k__BackingField, put=__cordl_internal_set__Actor_k__BackingField)) ::Photon::Realtime::Player*  _Actor_k__BackingField;

/// @brief Field <OnRemoteVoiceRemoveAction>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnRemoteVoiceRemoveAction_k__BackingField, put=__cordl_internal_set__OnRemoteVoiceRemoveAction_k__BackingField)) ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  _OnRemoteVoiceRemoveAction_k__BackingField;

/// @brief Field <PlaybackStarted>k__BackingField, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__PlaybackStarted_k__BackingField, put=__cordl_internal_set__PlaybackStarted_k__BackingField)) bool  _PlaybackStarted_k__BackingField;

/// @brief Field audioOutput, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioOutput, put=__cordl_internal_set_audioOutput)) ::Photon::Voice::IAudioOut_1<float_t>*  audioOutput;

/// @brief Field playDelayMs, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_playDelayMs, put=__cordl_internal_set_playDelayMs)) int32_t  playDelayMs;

/// @brief Field playbackDelaySettings, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_playbackDelaySettings, put=__cordl_internal_set_playbackDelaySettings)) ::Photon::Voice::Unity::PlaybackDelaySettings  playbackDelaySettings;

/// @brief Field playbackExplicitlyStopped, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_playbackExplicitlyStopped, put=__cordl_internal_set_playbackExplicitlyStopped)) bool  playbackExplicitlyStopped;

/// @brief Field playbackOnlyWhenEnabled, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_playbackOnlyWhenEnabled, put=__cordl_internal_set_playbackOnlyWhenEnabled)) bool  playbackOnlyWhenEnabled;

/// @brief Field remoteVoiceLink, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteVoiceLink, put=__cordl_internal_set_remoteVoiceLink)) ::Photon::Voice::Unity::RemoteVoiceLink*  remoteVoiceLink;

/// @brief Method AudioOutputService, addr 0xa773754, size 0xa4, virtual true, abstract: false, final false
inline void AudioOutputService() ;

/// @brief Method AudioOutputStart, addr 0xa7734d8, size 0xc4, virtual true, abstract: false, final false
inline void AudioOutputStart(int32_t  frequency, int32_t  channels, int32_t  frameSamplesPerChannel) ;

/// @brief Method AudioOutputStop, addr 0xa773694, size 0xa4, virtual true, abstract: false, final false
inline void AudioOutputStop() ;

/// @brief Method CleanUp, addr 0xa773220, size 0x168, virtual false, abstract: false, final false
inline void CleanUp() ;

/// @brief Method GetDefaultAudioOutFactory, addr 0xa772bf4, size 0x108, virtual false, abstract: false, final false
inline ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* GetDefaultAudioOutFactory() ;

/// @brief Method Initialize, addr 0xa772958, size 0x29c, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::Photon::Voice::Unity::Speaker* New_ctor() ;

/// @brief Method OnAudioFrame, addr 0xa773388, size 0x150, virtual true, abstract: false, final false
inline void OnAudioFrame(::Photon::Voice::FrameOut_1<float_t>*  frame) ;

/// @brief Method OnDestroy, addr 0xa77359c, size 0xf8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa77293c, size 0x1c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa77291c, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRemoteVoiceInfo, addr 0xa772d04, size 0x3f4, virtual false, abstract: false, final false
inline bool OnRemoteVoiceInfo(::Photon::Voice::Unity::RemoteVoiceLink*  stream) ;

/// @brief Method OnRemoteVoiceRemove, addr 0xa7730fc, size 0x124, virtual false, abstract: false, final false
inline void OnRemoteVoiceRemove() ;

/// @brief Method RestartPlayback, addr 0xa773908, size 0x5c, virtual false, abstract: false, final false
inline bool RestartPlayback(bool  reinit) ;

/// @brief Method Service, addr 0xa773738, size 0x1c, virtual false, abstract: false, final false
inline void Service() ;

/// @brief Method SetPlaybackDelaySettings, addr 0xa773974, size 0x254, virtual false, abstract: false, final false
inline bool SetPlaybackDelaySettings(int32_t  low, int32_t  high, int32_t  max) ;

/// @brief Method SetPlaybackDelaySettings, addr 0xa773964, size 0x10, virtual false, abstract: false, final false
inline bool SetPlaybackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  pdc) ;

/// @brief Method StartPlayback, addr 0xa7730f8, size 0x4, virtual false, abstract: false, final false
inline bool StartPlayback() ;

/// @brief Method StartPlaying, addr 0xa77203c, size 0x520, virtual false, abstract: false, final false
inline bool StartPlaying() ;

/// @brief Method StopPlayback, addr 0xa7737f8, size 0x110, virtual false, abstract: false, final false
inline bool StopPlayback() ;

/// @brief Method StopPlaying, addr 0xa77255c, size 0x398, virtual false, abstract: false, final false
inline bool StopPlaying(bool  force) ;

constexpr ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* const& __cordl_internal_get_CustomAudioOutFactory() const;

constexpr ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>*& __cordl_internal_get_CustomAudioOutFactory() ;

constexpr ::Photon::Realtime::Player* const& __cordl_internal_get__Actor_k__BackingField() const;

constexpr ::Photon::Realtime::Player*& __cordl_internal_get__Actor_k__BackingField() ;

constexpr ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>* const& __cordl_internal_get__OnRemoteVoiceRemoveAction_k__BackingField() const;

constexpr ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*& __cordl_internal_get__OnRemoteVoiceRemoveAction_k__BackingField() ;

constexpr bool const& __cordl_internal_get__PlaybackStarted_k__BackingField() const;

constexpr bool& __cordl_internal_get__PlaybackStarted_k__BackingField() ;

constexpr ::Photon::Voice::IAudioOut_1<float_t>* const& __cordl_internal_get_audioOutput() const;

constexpr ::Photon::Voice::IAudioOut_1<float_t>*& __cordl_internal_get_audioOutput() ;

constexpr int32_t const& __cordl_internal_get_playDelayMs() const;

constexpr int32_t& __cordl_internal_get_playDelayMs() ;

constexpr ::Photon::Voice::Unity::PlaybackDelaySettings const& __cordl_internal_get_playbackDelaySettings() const;

constexpr ::Photon::Voice::Unity::PlaybackDelaySettings& __cordl_internal_get_playbackDelaySettings() ;

constexpr bool const& __cordl_internal_get_playbackExplicitlyStopped() const;

constexpr bool& __cordl_internal_get_playbackExplicitlyStopped() ;

constexpr bool const& __cordl_internal_get_playbackOnlyWhenEnabled() const;

constexpr bool& __cordl_internal_get_playbackOnlyWhenEnabled() ;

constexpr ::Photon::Voice::Unity::RemoteVoiceLink* const& __cordl_internal_get_remoteVoiceLink() const;

constexpr ::Photon::Voice::Unity::RemoteVoiceLink*& __cordl_internal_get_remoteVoiceLink() ;

constexpr void __cordl_internal_set_CustomAudioOutFactory(::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>*  value) ;

constexpr void __cordl_internal_set__Actor_k__BackingField(::Photon::Realtime::Player*  value) ;

constexpr void __cordl_internal_set__OnRemoteVoiceRemoveAction_k__BackingField(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value) ;

constexpr void __cordl_internal_set__PlaybackStarted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_audioOutput(::Photon::Voice::IAudioOut_1<float_t>*  value) ;

constexpr void __cordl_internal_set_playDelayMs(int32_t  value) ;

constexpr void __cordl_internal_set_playbackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  value) ;

constexpr void __cordl_internal_set_playbackExplicitlyStopped(bool  value) ;

constexpr void __cordl_internal_set_playbackOnlyWhenEnabled(bool  value) ;

constexpr void __cordl_internal_set_remoteVoiceLink(::Photon::Voice::Unity::RemoteVoiceLink*  value) ;

/// @brief Method .ctor, addr 0xa773bc8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Actor, addr 0xa771f7c, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* get_Actor() ;

/// @brief Method get_IsInitialized, addr 0xa771e9c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_IsLinked, addr 0xa771f8c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsLinked() ;

/// @brief Method get_IsPlaying, addr 0xa771df0, size 0xac, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_Lag, addr 0xa771eac, size 0xc0, virtual false, abstract: false, final false
inline int32_t get_Lag() ;

/// [CompilerGenerated]
/// @brief Method get_OnRemoteVoiceRemoveAction, addr 0xa771f6c, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>* get_OnRemoteVoiceRemoveAction() ;

/// @brief Method get_PlayDelayMs, addr 0xa771dd0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlayDelayMs() ;

/// @brief Method get_PlaybackDelayMaxHard, addr 0xa772914, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlaybackDelayMaxHard() ;

/// @brief Method get_PlaybackDelayMaxSoft, addr 0xa77290c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlaybackDelayMaxSoft() ;

/// @brief Method get_PlaybackDelayMinSoft, addr 0xa772904, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PlaybackDelayMinSoft() ;

/// @brief Method get_PlaybackOnlyWhenEnabled, addr 0xa771fa4, size 0x8, virtual false, abstract: false, final false
inline bool get_PlaybackOnlyWhenEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_PlaybackStarted, addr 0xa7728f4, size 0x8, virtual false, abstract: false, final false
inline bool get_PlaybackStarted() ;

/// @brief Method get_RemoteVoiceLink, addr 0xa771f9c, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::Unity::RemoteVoiceLink* get_RemoteVoiceLink() ;

/// [CompilerGenerated]
/// @brief Method set_Actor, addr 0xa771f84, size 0x8, virtual false, abstract: false, final false
inline void set_Actor(::Photon::Realtime::Player*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnRemoteVoiceRemoveAction, addr 0xa771f74, size 0x8, virtual false, abstract: false, final false
inline void set_OnRemoteVoiceRemoveAction(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value) ;

/// @brief Method set_PlayDelayMs, addr 0xa771dd8, size 0x18, virtual false, abstract: false, final false
inline void set_PlayDelayMs(int32_t  value) ;

/// @brief Method set_PlaybackOnlyWhenEnabled, addr 0xa771fac, size 0x90, virtual false, abstract: false, final false
inline void set_PlaybackOnlyWhenEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlaybackStarted, addr 0xa7728fc, size 0x8, virtual false, abstract: false, final false
inline void set_PlaybackStarted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Speaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Speaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Speaker(Speaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Speaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Speaker(Speaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28887};

/// @brief Field audioOutput, offset: 0x30, size: 0x8, def value: None
 ::Photon::Voice::IAudioOut_1<float_t>*  ___audioOutput;

/// @brief Field remoteVoiceLink, offset: 0x38, size: 0x8, def value: None
 ::Photon::Voice::Unity::RemoteVoiceLink*  ___remoteVoiceLink;

/// [SerializeField]
/// @brief Field playbackOnlyWhenEnabled, offset: 0x40, size: 0x1, def value: None
 bool  ___playbackOnlyWhenEnabled;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field playDelayMs, offset: 0x44, size: 0x4, def value: None
 int32_t  ___playDelayMs;

/// [SerializeField]
/// @brief Field playbackDelaySettings, offset: 0x48, size: 0xc, def value: None
 ::Photon::Voice::Unity::PlaybackDelaySettings  ___playbackDelaySettings;

/// @brief Field playbackExplicitlyStopped, offset: 0x54, size: 0x1, def value: None
 bool  ___playbackExplicitlyStopped;

/// @brief Field CustomAudioOutFactory, offset: 0x58, size: 0x8, def value: None
 ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>*  ___CustomAudioOutFactory;

/// [CompilerGenerated]
/// @brief Field <OnRemoteVoiceRemoveAction>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  ____OnRemoteVoiceRemoveAction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Actor>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Photon::Realtime::Player*  ____Actor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlaybackStarted>k__BackingField, offset: 0x70, size: 0x1, def value: None
 bool  ____PlaybackStarted_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::Speaker, ___audioOutput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker, ___remoteVoiceLink) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker, ___playbackOnlyWhenEnabled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker, ___playDelayMs) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker, ___playbackDelaySettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker, ___playbackExplicitlyStopped) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker, ___CustomAudioOutFactory) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker, ____OnRemoteVoiceRemoveAction_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker, ____Actor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker, ____PlaybackStarted_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::Speaker) == 0x78, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.Speaker/<>c__DisplayClass44_0
class CORDL_TYPE Speaker___c__DisplayClass44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Photon::Voice::Unity::Speaker>  __4__this;

/// @brief Field pdc, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pdc, put=__cordl_internal_set_pdc)) ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  pdc;

static inline ::Photon::Voice::Unity::Speaker___c__DisplayClass44_0* New_ctor() ;

/// @brief Method <GetDefaultAudioOutFactory>b__0, addr 0xa773be4, size 0xf8, virtual false, abstract: false, final false
inline ::Photon::Voice::IAudioOut_1<float_t>* _GetDefaultAudioOutFactory_b__0() ;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& __cordl_internal_get___4__this() ;

constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* const& __cordl_internal_get_pdc() const;

constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*& __cordl_internal_get_pdc() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::Speaker>  value) ;

constexpr void __cordl_internal_set_pdc(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  value) ;

/// @brief Method .ctor, addr 0xa772cfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Speaker___c__DisplayClass44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Speaker___c__DisplayClass44_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Speaker___c__DisplayClass44_0(Speaker___c__DisplayClass44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Speaker___c__DisplayClass44_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Speaker___c__DisplayClass44_0(Speaker___c__DisplayClass44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28886};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Speaker>  _____4__this;

/// @brief Field pdc, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  ___pdc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::Speaker___c__DisplayClass44_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Speaker___c__DisplayClass44_0, ___pdc) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::Speaker___c__DisplayClass44_0) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
