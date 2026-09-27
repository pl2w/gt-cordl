#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/BaseAudioClipInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__VoiceAudioInputState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseAudioClipInput)
namespace Meta::Voice {
struct VoiceAudioInputState;
}
namespace Meta::WitAi::Data {
class AudioEncoding;
}
namespace Meta::WitAi::Interfaces {
class IAudioInputSource;
}
namespace Meta::WitAi::Lib {
class BaseAudioClipInput__PerformActivation_d__61;
}
namespace Meta::WitAi::Lib {
class BaseAudioClipInput__ReadRawAudio_d__68;
}
namespace Meta::WitAi::Lib {
class IAudioLevelRangeProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
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
class Coroutine;
}
// Forward declare root types
namespace Meta::WitAi::Lib {
class BaseAudioClipInput;
}
namespace Meta::WitAi::Lib {
class BaseAudioClipInput__PerformActivation_d__61;
}
namespace Meta::WitAi::Lib {
class BaseAudioClipInput__ReadRawAudio_d__68;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Lib::BaseAudioClipInput*);
MARK_REF_T(::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*);
MARK_REF_T(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::BaseAudioClipInput*, "Meta.WitAi.Lib", "BaseAudioClipInput");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61*, "Meta.WitAi.Lib", "BaseAudioClipInput/<PerformActivation>d__61");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68*, "Meta.WitAi.Lib", "BaseAudioClipInput/<ReadRawAudio>d__68");
// Dependencies Meta.Voice.VoiceAudioInputState, UnityEngine.MonoBehaviour
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.BaseAudioClipInput
class CORDL_TYPE BaseAudioClipInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PerformActivation_d__61 = ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61;

using _ReadRawAudio_d__68 = ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68;

 __declspec(property(get=get_ActivateOnEnable)) bool  ActivateOnEnable;

 __declspec(property(get=get_ActivationState, put=set_ActivationState)) ::Meta::Voice::VoiceAudioInputState  ActivationState;

 __declspec(property(get=get_AudioChannels)) int32_t  AudioChannels;

 __declspec(property(get=get_AudioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  AudioEncoding;

 __declspec(property(get=get_AudioSampleLength, put=set_AudioSampleLength)) int32_t  AudioSampleLength;

 __declspec(property(get=get_AudioSampleRate)) int32_t  AudioSampleRate;

 __declspec(property(get=get_CanActivateAudio)) bool  CanActivateAudio;

 __declspec(property(get=get_Clip)) ::UnityW<::UnityEngine::AudioClip>  Clip;

 __declspec(property(get=get_ClipPosition)) int32_t  ClipPosition;

 __declspec(property(get=get_IsMuted, put=set_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_IsRecording, put=set_IsRecording)) bool  IsRecording;

 __declspec(property(get=get_MaxAudioLevel)) float_t  MaxAudioLevel;

 __declspec(property(get=get_MinAudioLevel)) float_t  MinAudioLevel;

/// @brief Field OnActivationStateChange, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnActivationStateChange, put=__cordl_internal_set_OnActivationStateChange)) ::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  OnActivationStateChange;

/// @brief Field OnMicMuted, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMicMuted, put=__cordl_internal_set_OnMicMuted)) ::System::Action*  OnMicMuted;

/// @brief Field OnMicUnmuted, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMicUnmuted, put=__cordl_internal_set_OnMicUnmuted)) ::System::Action*  OnMicUnmuted;

/// @brief Field OnSampleReady, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSampleReady, put=__cordl_internal_set_OnSampleReady)) ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  OnSampleReady;

/// @brief Field OnStartRecording, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartRecording, put=__cordl_internal_set_OnStartRecording)) ::System::Action*  OnStartRecording;

/// @brief Field OnStartRecordingFailed, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartRecordingFailed, put=__cordl_internal_set_OnStartRecordingFailed)) ::System::Action*  OnStartRecordingFailed;

/// @brief Field OnStopRecording, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStopRecording, put=__cordl_internal_set_OnStopRecording)) ::System::Action*  OnStopRecording;

/// @brief Field <ActivationState>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__ActivationState_k__BackingField, put=__cordl_internal_set__ActivationState_k__BackingField)) ::Meta::Voice::VoiceAudioInputState  _ActivationState_k__BackingField;

/// @brief Field <AudioSampleLength>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__AudioSampleLength_k__BackingField, put=__cordl_internal_set__AudioSampleLength_k__BackingField)) int32_t  _AudioSampleLength_k__BackingField;

/// @brief Field <IsMuted>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMuted_k__BackingField, put=__cordl_internal_set__IsMuted_k__BackingField)) bool  _IsMuted_k__BackingField;

/// @brief Field <IsRecording>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRecording_k__BackingField, put=__cordl_internal_set__IsRecording_k__BackingField)) bool  _IsRecording_k__BackingField;

/// @brief Field _activateCoroutine, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__activateCoroutine, put=__cordl_internal_set__activateCoroutine)) ::UnityEngine::Coroutine*  _activateCoroutine;

/// @brief Field _audioEncoding, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioEncoding, put=__cordl_internal_set__audioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  _audioEncoding;

/// @brief Field _recordCoroutine, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordCoroutine, put=__cordl_internal_set__recordCoroutine)) ::UnityEngine::Coroutine*  _recordCoroutine;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioInputSource*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::Lib::IAudioLevelRangeProvider"
constexpr operator  ::Meta::WitAi::Lib::IAudioLevelRangeProvider*() noexcept;

/// @brief Method ActivateAudio, addr 0x9e16610, size 0x238, virtual false, abstract: false, final false
inline void ActivateAudio() ;

/// @brief Method DeactivateAudio, addr 0x9e16948, size 0x1a0, virtual false, abstract: false, final false
inline void DeactivateAudio() ;

/// @brief Method HandleActivation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IEnumerator* HandleActivation() ;

/// @brief Method HandleDeactivation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleDeactivation() ;

static inline ::Meta::WitAi::Lib::BaseAudioClipInput* New_ctor() ;

/// @brief Method OnDisable, addr 0x9e168dc, size 0x6c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e165d0, size 0x40, virtual true, abstract: false, final false
inline void OnEnable() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Lib.BaseAudioClipInput::<PerformActivation>d__61))]
/// @brief Method PerformActivation, addr 0x9e16848, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PerformActivation() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Lib.BaseAudioClipInput::<ReadRawAudio>d__68))]
/// @brief Method ReadRawAudio, addr 0x9e16c28, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ReadRawAudio() ;

/// @brief Method SetActivationState, addr 0x9e162b0, size 0x20, virtual false, abstract: false, final false
inline void SetActivationState(::Meta::Voice::VoiceAudioInputState  newActivationState) ;

/// @brief Method SetMuted, addr 0x9e16550, size 0x80, virtual true, abstract: false, final false
inline void SetMuted(bool  muted) ;

/// @brief Method StartRecording, addr 0x9e16ae8, size 0x140, virtual true, abstract: false, final false
inline void StartRecording(int32_t  sampleDurationMS) ;

/// @brief Method StopRecording, addr 0x9e16cbc, size 0x120, virtual true, abstract: false, final false
inline void StopRecording() ;

constexpr ::System::Action_1<::Meta::Voice::VoiceAudioInputState>* const& __cordl_internal_get_OnActivationStateChange() const;

constexpr ::System::Action_1<::Meta::Voice::VoiceAudioInputState>*& __cordl_internal_get_OnActivationStateChange() ;

constexpr ::System::Action* const& __cordl_internal_get_OnMicMuted() const;

constexpr ::System::Action*& __cordl_internal_get_OnMicMuted() ;

constexpr ::System::Action* const& __cordl_internal_get_OnMicUnmuted() const;

constexpr ::System::Action*& __cordl_internal_get_OnMicUnmuted() ;

constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>* const& __cordl_internal_get_OnSampleReady() const;

constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*& __cordl_internal_get_OnSampleReady() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStartRecording() const;

constexpr ::System::Action*& __cordl_internal_get_OnStartRecording() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStartRecordingFailed() const;

constexpr ::System::Action*& __cordl_internal_get_OnStartRecordingFailed() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStopRecording() const;

constexpr ::System::Action*& __cordl_internal_get_OnStopRecording() ;

constexpr ::Meta::Voice::VoiceAudioInputState const& __cordl_internal_get__ActivationState_k__BackingField() const;

constexpr ::Meta::Voice::VoiceAudioInputState& __cordl_internal_get__ActivationState_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__AudioSampleLength_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__AudioSampleLength_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsMuted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMuted_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsRecording_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRecording_k__BackingField() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__activateCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__activateCoroutine() ;

constexpr ::Meta::WitAi::Data::AudioEncoding* const& __cordl_internal_get__audioEncoding() const;

constexpr ::Meta::WitAi::Data::AudioEncoding*& __cordl_internal_get__audioEncoding() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__recordCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__recordCoroutine() ;

constexpr void __cordl_internal_set_OnActivationStateChange(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  value) ;

constexpr void __cordl_internal_set_OnMicMuted(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnMicUnmuted(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

constexpr void __cordl_internal_set_OnStartRecording(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStartRecordingFailed(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStopRecording(::System::Action*  value) ;

constexpr void __cordl_internal_set__ActivationState_k__BackingField(::Meta::Voice::VoiceAudioInputState  value) ;

constexpr void __cordl_internal_set__AudioSampleLength_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsMuted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsRecording_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activateCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__audioEncoding(::Meta::WitAi::Data::AudioEncoding*  value) ;

constexpr void __cordl_internal_set__recordCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x9e16ddc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnActivationStateChange, addr 0x9e15c38, size 0xb0, virtual false, abstract: false, final false
inline void add_OnActivationStateChange(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMicMuted, addr 0x9e162e0, size 0x9c, virtual true, abstract: false, final true
inline void add_OnMicMuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMicUnmuted, addr 0x9e16418, size 0x9c, virtual true, abstract: false, final true
inline void add_OnMicUnmuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSampleReady, addr 0x9e16150, size 0xb0, virtual true, abstract: false, final true
inline void add_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStartRecording, addr 0x9e15da8, size 0x9c, virtual true, abstract: false, final true
inline void add_OnStartRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStartRecordingFailed, addr 0x9e15ee0, size 0x9c, virtual true, abstract: false, final true
inline void add_OnStartRecordingFailed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStopRecording, addr 0x9e16018, size 0x9c, virtual true, abstract: false, final true
inline void add_OnStopRecording(::System::Action*  value) ;

/// @brief Method get_ActivateOnEnable, addr 0x9e15aa0, size 0x8, virtual true, abstract: false, final false
inline bool get_ActivateOnEnable() ;

/// [CompilerGenerated]
/// @brief Method get_ActivationState, addr 0x9e15c28, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::VoiceAudioInputState get_ActivationState() ;

/// @brief Method get_AudioChannels, addr 0x9e15aa8, size 0x8, virtual true, abstract: false, final false
inline int32_t get_AudioChannels() ;

/// @brief Method get_AudioEncoding, addr 0x9e15ad8, size 0xe0, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::AudioEncoding* get_AudioEncoding() ;

/// [CompilerGenerated]
/// @brief Method get_AudioSampleLength, addr 0x9e15ab8, size 0x8, virtual true, abstract: false, final false
inline int32_t get_AudioSampleLength() ;

/// @brief Method get_AudioSampleRate, addr 0x9e15ab0, size 0x8, virtual true, abstract: false, final false
inline int32_t get_AudioSampleRate() ;

/// @brief Method get_CanActivateAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_CanActivateAudio() ;

/// @brief Method get_Clip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::AudioClip> get_Clip() ;

/// @brief Method get_ClipPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ClipPosition() ;

/// [CompilerGenerated]
/// @brief Method get_IsMuted, addr 0x9e162d0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsMuted() ;

/// [CompilerGenerated]
/// @brief Method get_IsRecording, addr 0x9e15d98, size 0x8, virtual true, abstract: false, final false
inline bool get_IsRecording() ;

/// @brief Method get_MaxAudioLevel, addr 0x9e15ad0, size 0x8, virtual true, abstract: false, final false
inline float_t get_MaxAudioLevel() ;

/// @brief Method get_MinAudioLevel, addr 0x9e15ac8, size 0x8, virtual true, abstract: false, final false
inline float_t get_MinAudioLevel() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr ::Meta::WitAi::Interfaces::IAudioInputSource* i___Meta__WitAi__Interfaces__IAudioInputSource() noexcept;

/// @brief Convert to "::Meta::WitAi::Lib::IAudioLevelRangeProvider"
constexpr ::Meta::WitAi::Lib::IAudioLevelRangeProvider* i___Meta__WitAi__Lib__IAudioLevelRangeProvider() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnActivationStateChange, addr 0x9e15ce8, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnActivationStateChange(::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMicMuted, addr 0x9e1637c, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnMicMuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMicUnmuted, addr 0x9e164b4, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnMicUnmuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSampleReady, addr 0x9e16200, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartRecording, addr 0x9e15e44, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnStartRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartRecordingFailed, addr 0x9e15f7c, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnStartRecordingFailed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStopRecording, addr 0x9e160b4, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnStopRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ActivationState, addr 0x9e15c30, size 0x8, virtual false, abstract: false, final false
inline void set_ActivationState(::Meta::Voice::VoiceAudioInputState  value) ;

/// [CompilerGenerated]
/// @brief Method set_AudioSampleLength, addr 0x9e15ac0, size 0x8, virtual false, abstract: false, final false
inline void set_AudioSampleLength(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsMuted, addr 0x9e162d8, size 0x8, virtual false, abstract: false, final false
inline void set_IsMuted(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsRecording, addr 0x9e15da0, size 0x8, virtual false, abstract: false, final false
inline void set_IsRecording(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseAudioClipInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioClipInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAudioClipInput(BaseAudioClipInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioClipInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAudioClipInput(BaseAudioClipInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32770};

/// [CompilerGenerated]
/// @brief Field <AudioSampleLength>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____AudioSampleLength_k__BackingField;

/// @brief Field _audioEncoding, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Data::AudioEncoding*  ____audioEncoding;

/// [CompilerGenerated]
/// @brief Field <ActivationState>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::Meta::Voice::VoiceAudioInputState  ____ActivationState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnActivationStateChange, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Meta::Voice::VoiceAudioInputState>*  ___OnActivationStateChange;

/// [CompilerGenerated]
/// @brief Field <IsRecording>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsRecording_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnStartRecording, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ___OnStartRecording;

/// [CompilerGenerated]
/// @brief Field OnStartRecordingFailed, offset: 0x50, size: 0x8, def value: None
 ::System::Action*  ___OnStartRecordingFailed;

/// [CompilerGenerated]
/// @brief Field OnStopRecording, offset: 0x58, size: 0x8, def value: None
 ::System::Action*  ___OnStopRecording;

/// [CompilerGenerated]
/// @brief Field OnSampleReady, offset: 0x60, size: 0x8, def value: None
 ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  ___OnSampleReady;

/// [CompilerGenerated]
/// @brief Field <IsMuted>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____IsMuted_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnMicMuted, offset: 0x70, size: 0x8, def value: None
 ::System::Action*  ___OnMicMuted;

/// [CompilerGenerated]
/// @brief Field OnMicUnmuted, offset: 0x78, size: 0x8, def value: None
 ::System::Action*  ___OnMicUnmuted;

/// @brief Field _activateCoroutine, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____activateCoroutine;

/// @brief Field _recordCoroutine, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____recordCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ____AudioSampleLength_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ____audioEncoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ____ActivationState_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ___OnActivationStateChange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ____IsRecording_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ___OnStartRecording) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ___OnStartRecordingFailed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ___OnStopRecording) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ___OnSampleReady) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ____IsMuted_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ___OnMicMuted) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ___OnMicUnmuted) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ____activateCoroutine) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput, ____recordCoroutine) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Lib::BaseAudioClipInput) == 0x90, "Size mismatch!");

} // namespace end def Meta::WitAi::Lib
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.BaseAudioClipInput/<ReadRawAudio>d__68
class CORDL_TYPE BaseAudioClipInput__ReadRawAudio_d__68 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>  __4__this;

/// @brief Field <loops>5__6, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__loops_5__6, put=__cordl_internal_set__loops_5__6)) int32_t  _loops_5__6;

/// @brief Field <micClip>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__micClip_5__2, put=__cordl_internal_set__micClip_5__2)) ::UnityW<::UnityEngine::AudioClip>  _micClip_5__2;

/// @brief Field <prevMicPosition>5__4, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevMicPosition_5__4, put=__cordl_internal_set__prevMicPosition_5__4)) int32_t  _prevMicPosition_5__4;

/// @brief Field <readAbsPosition>5__5, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__readAbsPosition_5__5, put=__cordl_internal_set__readAbsPosition_5__5)) int32_t  _readAbsPosition_5__5;

/// @brief Field <samples>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__samples_5__3, put=__cordl_internal_set__samples_5__3)) ::ArrayW<float_t>  _samples_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e16f1c, size 0x484, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e173a0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e173a8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e173e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e16f18, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__loops_5__6() const;

constexpr int32_t& __cordl_internal_get__loops_5__6() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get__micClip_5__2() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get__micClip_5__2() ;

constexpr int32_t const& __cordl_internal_get__prevMicPosition_5__4() const;

constexpr int32_t& __cordl_internal_get__prevMicPosition_5__4() ;

constexpr int32_t const& __cordl_internal_get__readAbsPosition_5__5() const;

constexpr int32_t& __cordl_internal_get__readAbsPosition_5__5() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__samples_5__3() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__samples_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>  value) ;

constexpr void __cordl_internal_set__loops_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__micClip_5__2(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set__prevMicPosition_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__readAbsPosition_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__samples_5__3(::ArrayW<float_t>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e16c94, size 0x28, virtual false, abstract: false, final false
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
constexpr BaseAudioClipInput__ReadRawAudio_d__68() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioClipInput__ReadRawAudio_d__68", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAudioClipInput__ReadRawAudio_d__68(BaseAudioClipInput__ReadRawAudio_d__68 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioClipInput__ReadRawAudio_d__68", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAudioClipInput__ReadRawAudio_d__68(BaseAudioClipInput__ReadRawAudio_d__68 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32769};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>  _____4__this;

/// @brief Field <micClip>5__2, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ____micClip_5__2;

/// @brief Field <samples>5__3, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____samples_5__3;

/// @brief Field <prevMicPosition>5__4, offset: 0x38, size: 0x4, def value: None
 int32_t  ____prevMicPosition_5__4;

/// @brief Field <readAbsPosition>5__5, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____readAbsPosition_5__5;

/// @brief Field <loops>5__6, offset: 0x40, size: 0x4, def value: None
 int32_t  ____loops_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68, ____micClip_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68, ____samples_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68, ____prevMicPosition_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68, ____readAbsPosition_5__5) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68, ____loops_5__6) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Lib::BaseAudioClipInput__ReadRawAudio_d__68) == 0x48, "Size mismatch!");

} // namespace end def Meta::WitAi::Lib
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Lib {
// Is value type: false
// CS Name: Meta.WitAi.Lib.BaseAudioClipInput/<PerformActivation>d__61
class CORDL_TYPE BaseAudioClipInput__PerformActivation_d__61 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e16de8, size 0xe8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e16ed0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e16ed8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e16f10, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e16de4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e168b4, size 0x28, virtual false, abstract: false, final false
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
constexpr BaseAudioClipInput__PerformActivation_d__61() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioClipInput__PerformActivation_d__61", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAudioClipInput__PerformActivation_d__61(BaseAudioClipInput__PerformActivation_d__61 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioClipInput__PerformActivation_d__61", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAudioClipInput__PerformActivation_d__61(BaseAudioClipInput__PerformActivation_d__61 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32768};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Lib::BaseAudioClipInput>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Lib::BaseAudioClipInput__PerformActivation_d__61) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Lib
