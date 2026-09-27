#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTSpeaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTSpeaker)
namespace GorillaTag::Audio {
class GTSpeaker___c__DisplayClass12_0;
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
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GorillaTag::Audio {
class GTSpeaker;
}
namespace GorillaTag::Audio {
class GTSpeaker___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::GTSpeaker*);
MARK_REF_T(::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::GTSpeaker*, "GorillaTag.Audio", "GTSpeaker");
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0*, "GorillaTag.Audio", "GTSpeaker/<>c__DisplayClass12_0");
// Dependencies Photon.Voice.Unity.Speaker, UnityEngine.AudioSource
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.GTSpeaker
class CORDL_TYPE GTSpeaker : public ::Photon::Voice::Unity::Speaker {
public:
// Declarations
using __c__DisplayClass12_0 = ::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0;

/// @brief Field BroadcastExternal, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_BroadcastExternal, put=__cordl_internal_set_BroadcastExternal)) bool  BroadcastExternal;

/// @brief Field _audioOutputStarted, offset 0x95, size 0x1 
 __declspec(property(get=__cordl_internal_get__audioOutputStarted, put=__cordl_internal_set__audioOutputStarted)) bool  _audioOutputStarted;

/// @brief Field _channels, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) int32_t  _channels;

/// @brief Field _externalAudioOutputs, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__externalAudioOutputs, put=__cordl_internal_set__externalAudioOutputs)) ::System::Collections::Generic::List_1<::Photon::Voice::IAudioOut_1<float_t>*>*  _externalAudioOutputs;

/// @brief Field _externalAudioSources, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__externalAudioSources, put=__cordl_internal_set__externalAudioSources)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  _externalAudioSources;

/// @brief Field _frameSamplesPerChannel, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameSamplesPerChannel, put=__cordl_internal_set__frameSamplesPerChannel)) int32_t  _frameSamplesPerChannel;

/// @brief Field _frequency, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__frequency, put=__cordl_internal_set__frequency)) int32_t  _frequency;

/// @brief Field _initializedExternalAudioSources, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get__initializedExternalAudioSources, put=__cordl_internal_set__initializedExternalAudioSources)) bool  _initializedExternalAudioSources;

/// @brief Method AddExternalAudioSources, addr 0x5d51630, size 0x44, virtual false, abstract: false, final false
inline void AddExternalAudioSources(::ArrayW<::UnityEngine::AudioSource*>  audioSources) ;

/// @brief Method AudioOutputService, addr 0x5d52124, size 0x218, virtual true, abstract: false, final false
inline void AudioOutputService() ;

/// @brief Method AudioOutputStart, addr 0x5d51f24, size 0x54, virtual true, abstract: false, final false
inline void AudioOutputStart(int32_t  frequency, int32_t  channels, int32_t  frameSamplesPerChannel) ;

/// @brief Method AudioOutputStop, addr 0x5d51f78, size 0x1ac, virtual true, abstract: false, final false
inline void AudioOutputStop() ;

/// @brief Method ExternalAudioOutputStart, addr 0x5d5181c, size 0x290, virtual false, abstract: false, final false
inline void ExternalAudioOutputStart(int32_t  frequency, int32_t  channels, int32_t  frameSamplesPerChannel) ;

/// @brief Method GetAudioOutFactoryFromSource, addr 0x5d51bc8, size 0xec, virtual false, abstract: false, final false
inline ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* GetAudioOutFactoryFromSource(::UnityEngine::AudioSource*  source, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  pdc) ;

/// @brief Method Initialize, addr 0x5d51aac, size 0x11c, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method InitializeExternalAudioSources, addr 0x5d51674, size 0x1a8, virtual false, abstract: false, final false
inline void InitializeExternalAudioSources() ;

static inline ::GorillaTag::Audio::GTSpeaker* New_ctor() ;

/// @brief Method OnAudioFrame, addr 0x5d51cbc, size 0x268, virtual true, abstract: false, final false
inline void OnAudioFrame(::Photon::Voice::FrameOut_1<float_t>*  frame) ;

/// @brief Method Start, addr 0x5d51570, size 0xc0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleAudioSource, addr 0x5d5233c, size 0x1a4, virtual false, abstract: false, final false
inline void ToggleAudioSource(bool  toggle) ;

constexpr bool const& __cordl_internal_get_BroadcastExternal() const;

constexpr bool& __cordl_internal_get_BroadcastExternal() ;

constexpr bool const& __cordl_internal_get__audioOutputStarted() const;

constexpr bool& __cordl_internal_get__audioOutputStarted() ;

constexpr int32_t const& __cordl_internal_get__channels() const;

constexpr int32_t& __cordl_internal_get__channels() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Voice::IAudioOut_1<float_t>*>* const& __cordl_internal_get__externalAudioOutputs() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Voice::IAudioOut_1<float_t>*>*& __cordl_internal_get__externalAudioOutputs() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get__externalAudioSources() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get__externalAudioSources() ;

constexpr int32_t const& __cordl_internal_get__frameSamplesPerChannel() const;

constexpr int32_t& __cordl_internal_get__frameSamplesPerChannel() ;

constexpr int32_t const& __cordl_internal_get__frequency() const;

constexpr int32_t& __cordl_internal_get__frequency() ;

constexpr bool const& __cordl_internal_get__initializedExternalAudioSources() const;

constexpr bool& __cordl_internal_get__initializedExternalAudioSources() ;

constexpr void __cordl_internal_set_BroadcastExternal(bool  value) ;

constexpr void __cordl_internal_set__audioOutputStarted(bool  value) ;

constexpr void __cordl_internal_set__channels(int32_t  value) ;

constexpr void __cordl_internal_set__externalAudioOutputs(::System::Collections::Generic::List_1<::Photon::Voice::IAudioOut_1<float_t>*>*  value) ;

constexpr void __cordl_internal_set__externalAudioSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set__frameSamplesPerChannel(int32_t  value) ;

constexpr void __cordl_internal_set__frequency(int32_t  value) ;

constexpr void __cordl_internal_set__initializedExternalAudioSources(bool  value) ;

/// @brief Method .ctor, addr 0x5d524e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSpeaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSpeaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSpeaker(GTSpeaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSpeaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSpeaker(GTSpeaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4792};

/// [FormerlySerializedAs("UseExternalAudioSources")]
/// @brief Field BroadcastExternal, offset: 0x71, size: 0x1, def value: None
 bool  ___BroadcastExternal;

/// [SerializeField]
/// @brief Field _externalAudioSources, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ____externalAudioSources;

/// @brief Field _externalAudioOutputs, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Voice::IAudioOut_1<float_t>*>*  ____externalAudioOutputs;

/// @brief Field _frequency, offset: 0x88, size: 0x4, def value: None
 int32_t  ____frequency;

/// @brief Field _channels, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____channels;

/// @brief Field _frameSamplesPerChannel, offset: 0x90, size: 0x4, def value: None
 int32_t  ____frameSamplesPerChannel;

/// @brief Field _initializedExternalAudioSources, offset: 0x94, size: 0x1, def value: None
 bool  ____initializedExternalAudioSources;

/// @brief Field _audioOutputStarted, offset: 0x95, size: 0x1, def value: None
 bool  ____audioOutputStarted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::GTSpeaker, ___BroadcastExternal) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTSpeaker, ____externalAudioSources) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTSpeaker, ____externalAudioOutputs) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTSpeaker, ____frequency) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTSpeaker, ____channels) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTSpeaker, ____frameSamplesPerChannel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTSpeaker, ____initializedExternalAudioSources) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTSpeaker, ____audioOutputStarted) == 0x95, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::GTSpeaker) == 0x98, "Size mismatch!");

} // namespace end def GorillaTag::Audio
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.GTSpeaker/<>c__DisplayClass12_0
class CORDL_TYPE GTSpeaker___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::Audio::GTSpeaker>  __4__this;

/// @brief Field pdc, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pdc, put=__cordl_internal_set_pdc)) ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  pdc;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::UnityEngine::AudioSource>  source;

static inline ::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <GetAudioOutFactoryFromSource>b__0, addr 0x5d524e8, size 0xd4, virtual false, abstract: false, final false
inline ::Photon::Voice::IAudioOut_1<float_t>* _GetAudioOutFactoryFromSource_b__0() ;

constexpr ::UnityW<::GorillaTag::Audio::GTSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::Audio::GTSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* const& __cordl_internal_get_pdc() const;

constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*& __cordl_internal_get_pdc() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::Audio::GTSpeaker>  value) ;

constexpr void __cordl_internal_set_pdc(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x5d51cb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTSpeaker___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTSpeaker___c__DisplayClass12_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTSpeaker___c__DisplayClass12_0(GTSpeaker___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTSpeaker___c__DisplayClass12_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTSpeaker___c__DisplayClass12_0(GTSpeaker___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4791};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___source;

/// @brief Field pdc, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  ___pdc;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::GTSpeaker>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0, ___pdc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::GTSpeaker___c__DisplayClass12_0) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Audio
