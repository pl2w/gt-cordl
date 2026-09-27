#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSClipData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipLoadState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSClipData)
namespace Meta::Voice::Audio {
class IAudioClipStream;
}
namespace Meta::WitAi::TTS::Data {
struct TTSClipLoadState;
}
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
}
namespace Meta::WitAi::TTS::Data {
class TTSEventContainer;
}
namespace Meta::WitAi::TTS::Data {
class TTSVoiceSettings;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
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
class AudioClip;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Data::TTSClipData*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::TTSClipData*, "Meta.WitAi.TTS.Data", "TTSClipData");
// Dependencies Meta.WitAi.TTS.Data.TTSClipLoadState, System.Object, UnityEngine.AudioType
namespace Meta::WitAi::TTS::Data {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Data.TTSClipData
class CORDL_TYPE TTSClipData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Events)) ::Meta::WitAi::TTS::Data::TTSEventContainer*  Events;

 __declspec(property(get=get_LoadCompletion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  LoadCompletion;

 __declspec(property(get=get_LoadError, put=set_LoadError)) ::StringW  LoadError;

 __declspec(property(get=get_LoadReady)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  LoadReady;

 __declspec(property(get=get_LoadStatusCode, put=set_LoadStatusCode)) int32_t  LoadStatusCode;

/// @brief Field <Events>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Events_k__BackingField, put=__cordl_internal_set__Events_k__BackingField)) ::Meta::WitAi::TTS::Data::TTSEventContainer*  _Events_k__BackingField;

/// @brief Field <LoadCompletion>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoadCompletion_k__BackingField, put=__cordl_internal_set__LoadCompletion_k__BackingField)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _LoadCompletion_k__BackingField;

/// @brief Field <LoadError>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoadError_k__BackingField, put=__cordl_internal_set__LoadError_k__BackingField)) ::StringW  _LoadError_k__BackingField;

/// @brief Field <LoadReady>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__LoadReady_k__BackingField, put=__cordl_internal_set__LoadReady_k__BackingField)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _LoadReady_k__BackingField;

/// @brief Field <LoadStatusCode>k__BackingField, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__LoadStatusCode_k__BackingField, put=__cordl_internal_set__LoadStatusCode_k__BackingField)) int32_t  _LoadStatusCode_k__BackingField;

/// @brief Field _clipStream, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__clipStream, put=__cordl_internal_set__clipStream)) ::Meta::Voice::Audio::IAudioClipStream*  _clipStream;

/// @brief Field <queryRequestId>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__queryRequestId_k__BackingField, put=__cordl_internal_set__queryRequestId_k__BackingField)) ::StringW  _queryRequestId_k__BackingField;

/// @brief Field audioType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioType, put=__cordl_internal_set_audioType)) ::UnityEngine::AudioType  audioType;

 __declspec(property(get=get_clip)) ::UnityW<::UnityEngine::AudioClip>  clip;

/// @brief Field clipID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipID, put=__cordl_internal_set_clipID)) ::StringW  clipID;

 __declspec(property(get=get_clipStream, put=set_clipStream)) ::Meta::Voice::Audio::IAudioClipStream*  clipStream;

/// @brief Field completeDuration, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_completeDuration, put=__cordl_internal_set_completeDuration)) float_t  completeDuration;

/// @brief Field diskCacheSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field extension, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_extension, put=__cordl_internal_set_extension)) ::StringW  extension;

/// @brief Field loadProgress, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadProgress, put=__cordl_internal_set_loadProgress)) float_t  loadProgress;

/// @brief Field loadState, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadState, put=__cordl_internal_set_loadState)) ::Meta::WitAi::TTS::Data::TTSClipLoadState  loadState;

/// @brief Field onDownloadComplete, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDownloadComplete, put=__cordl_internal_set_onDownloadComplete)) ::System::Action_1<::StringW>*  onDownloadComplete;

/// @brief Field onPlaybackBegin, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPlaybackBegin, put=__cordl_internal_set_onPlaybackBegin)) ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onPlaybackBegin;

/// @brief Field onPlaybackComplete, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPlaybackComplete, put=__cordl_internal_set_onPlaybackComplete)) ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onPlaybackComplete;

/// @brief Field onPlaybackQueued, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPlaybackQueued, put=__cordl_internal_set_onPlaybackQueued)) ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onPlaybackQueued;

/// @brief Field onPlaybackReady, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPlaybackReady, put=__cordl_internal_set_onPlaybackReady)) ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onPlaybackReady;

/// @brief Field onRequestBegin, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRequestBegin, put=__cordl_internal_set_onRequestBegin)) ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onRequestBegin;

/// @brief Field onRequestComplete, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRequestComplete, put=__cordl_internal_set_onRequestComplete)) ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onRequestComplete;

/// @brief Field onStateChange, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStateChange, put=__cordl_internal_set_onStateChange)) ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::Meta::WitAi::TTS::Data::TTSClipLoadState>*  onStateChange;

/// @brief Field queryOperationId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_queryOperationId, put=__cordl_internal_set_queryOperationId)) ::StringW  queryOperationId;

/// @brief Field queryParameters, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_queryParameters, put=__cordl_internal_set_queryParameters)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  queryParameters;

 __declspec(property(get=get_queryRequestId)) ::StringW  queryRequestId;

/// @brief Field queryStream, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_queryStream, put=__cordl_internal_set_queryStream)) bool  queryStream;

/// @brief Field readyDuration, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_readyDuration, put=__cordl_internal_set_readyDuration)) float_t  readyDuration;

/// @brief Field textToSpeak, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToSpeak, put=__cordl_internal_set_textToSpeak)) ::StringW  textToSpeak;

/// @brief Field useEvents, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_useEvents, put=__cordl_internal_set_useEvents)) bool  useEvents;

/// @brief Field voiceSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceSettings, put=__cordl_internal_set_voiceSettings)) ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings;

/// @brief Method Equals, addr 0x9e687f0, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9e6887c, size 0x24, virtual false, abstract: false, final false
inline bool Equals(::Meta::WitAi::TTS::Data::TTSClipData*  other) ;

/// @brief Method GetHashCode, addr 0x9e688b0, size 0x28, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method HasClipId, addr 0x9e688a0, size 0x10, virtual false, abstract: false, final false
inline bool HasClipId(::StringW  clipId) ;

static inline ::Meta::WitAi::TTS::Data::TTSClipData* New_ctor() ;

/// @brief Method ToString, addr 0x9e688d8, size 0x3a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer* const& __cordl_internal_get__Events_k__BackingField() const;

constexpr ::Meta::WitAi::TTS::Data::TTSEventContainer*& __cordl_internal_get__Events_k__BackingField() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__LoadCompletion_k__BackingField() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__LoadCompletion_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__LoadError_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__LoadError_k__BackingField() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__LoadReady_k__BackingField() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__LoadReady_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LoadStatusCode_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LoadStatusCode_k__BackingField() ;

constexpr ::Meta::Voice::Audio::IAudioClipStream* const& __cordl_internal_get__clipStream() const;

constexpr ::Meta::Voice::Audio::IAudioClipStream*& __cordl_internal_get__clipStream() ;

constexpr ::StringW const& __cordl_internal_get__queryRequestId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__queryRequestId_k__BackingField() ;

constexpr ::UnityEngine::AudioType const& __cordl_internal_get_audioType() const;

constexpr ::UnityEngine::AudioType& __cordl_internal_get_audioType() ;

constexpr ::StringW const& __cordl_internal_get_clipID() const;

constexpr ::StringW& __cordl_internal_get_clipID() ;

constexpr float_t const& __cordl_internal_get_completeDuration() const;

constexpr float_t& __cordl_internal_get_completeDuration() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::StringW const& __cordl_internal_get_extension() const;

constexpr ::StringW& __cordl_internal_get_extension() ;

constexpr float_t const& __cordl_internal_get_loadProgress() const;

constexpr float_t& __cordl_internal_get_loadProgress() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState const& __cordl_internal_get_loadState() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState& __cordl_internal_get_loadState() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_onDownloadComplete() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_onDownloadComplete() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get_onPlaybackBegin() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get_onPlaybackBegin() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get_onPlaybackComplete() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get_onPlaybackComplete() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get_onPlaybackQueued() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get_onPlaybackQueued() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get_onPlaybackReady() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get_onPlaybackReady() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get_onRequestBegin() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get_onRequestBegin() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get_onRequestComplete() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get_onRequestComplete() ;

constexpr ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::Meta::WitAi::TTS::Data::TTSClipLoadState>* const& __cordl_internal_get_onStateChange() const;

constexpr ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::Meta::WitAi::TTS::Data::TTSClipLoadState>*& __cordl_internal_get_onStateChange() ;

constexpr ::StringW const& __cordl_internal_get_queryOperationId() const;

constexpr ::StringW& __cordl_internal_get_queryOperationId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_queryParameters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_queryParameters() ;

constexpr bool const& __cordl_internal_get_queryStream() const;

constexpr bool& __cordl_internal_get_queryStream() ;

constexpr float_t const& __cordl_internal_get_readyDuration() const;

constexpr float_t& __cordl_internal_get_readyDuration() ;

constexpr ::StringW const& __cordl_internal_get_textToSpeak() const;

constexpr ::StringW& __cordl_internal_get_textToSpeak() ;

constexpr bool const& __cordl_internal_get_useEvents() const;

constexpr bool& __cordl_internal_get_useEvents() ;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& __cordl_internal_get_voiceSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& __cordl_internal_get_voiceSettings() ;

constexpr void __cordl_internal_set__Events_k__BackingField(::Meta::WitAi::TTS::Data::TTSEventContainer*  value) ;

constexpr void __cordl_internal_set__LoadCompletion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__LoadError_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__LoadReady_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__LoadStatusCode_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__clipStream(::Meta::Voice::Audio::IAudioClipStream*  value) ;

constexpr void __cordl_internal_set__queryRequestId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_audioType(::UnityEngine::AudioType  value) ;

constexpr void __cordl_internal_set_clipID(::StringW  value) ;

constexpr void __cordl_internal_set_completeDuration(float_t  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_extension(::StringW  value) ;

constexpr void __cordl_internal_set_loadProgress(float_t  value) ;

constexpr void __cordl_internal_set_loadState(::Meta::WitAi::TTS::Data::TTSClipLoadState  value) ;

constexpr void __cordl_internal_set_onDownloadComplete(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_onPlaybackBegin(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

constexpr void __cordl_internal_set_onPlaybackComplete(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

constexpr void __cordl_internal_set_onPlaybackQueued(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

constexpr void __cordl_internal_set_onPlaybackReady(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

constexpr void __cordl_internal_set_onRequestBegin(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

constexpr void __cordl_internal_set_onRequestComplete(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

constexpr void __cordl_internal_set_onStateChange(::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::Meta::WitAi::TTS::Data::TTSClipLoadState>*  value) ;

constexpr void __cordl_internal_set_queryOperationId(::StringW  value) ;

constexpr void __cordl_internal_set_queryParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_queryStream(bool  value) ;

constexpr void __cordl_internal_set_readyDuration(float_t  value) ;

constexpr void __cordl_internal_set_textToSpeak(::StringW  value) ;

constexpr void __cordl_internal_set_useEvents(bool  value) ;

constexpr void __cordl_internal_set_voiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value) ;

/// @brief Method .ctor, addr 0x9e68c78, size 0x11c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Events, addr 0x9e687b8, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSEventContainer* get_Events() ;

/// [CompilerGenerated]
/// @brief Method get_LoadCompletion, addr 0x9e687e8, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_LoadCompletion() ;

/// [CompilerGenerated]
/// @brief Method get_LoadError, addr 0x9e687d0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LoadError() ;

/// [CompilerGenerated]
/// @brief Method get_LoadReady, addr 0x9e687e0, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_LoadReady() ;

/// [CompilerGenerated]
/// @brief Method get_LoadStatusCode, addr 0x9e687c0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LoadStatusCode() ;

/// @brief Method get_clip, addr 0x9e68704, size 0xb4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_clip() ;

/// @brief Method get_clipStream, addr 0x9e684fc, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Audio::IAudioClipStream* get_clipStream() ;

/// [CompilerGenerated]
/// @brief Method get_queryRequestId, addr 0x9e684f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_queryRequestId() ;

/// [CompilerGenerated]
/// @brief Method set_LoadError, addr 0x9e687d8, size 0x8, virtual false, abstract: false, final false
inline void set_LoadError(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_LoadStatusCode, addr 0x9e687c8, size 0x8, virtual false, abstract: false, final false
inline void set_LoadStatusCode(int32_t  value) ;

/// @brief Method set_clipStream, addr 0x9e68504, size 0x200, virtual false, abstract: false, final false
inline void set_clipStream(::Meta::Voice::Audio::IAudioClipStream*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSClipData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSClipData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSClipData(TTSClipData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSClipData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSClipData(TTSClipData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29187};

/// @brief Field textToSpeak, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___textToSpeak;

/// @brief Field clipID, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___clipID;

/// [Obsolete("Use extension directly.")]
/// @brief Field audioType, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::AudioType  ___audioType;

/// @brief Field voiceSettings, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  ___voiceSettings;

/// @brief Field diskCacheSettings, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

/// [CompilerGenerated]
/// @brief Field <queryRequestId>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____queryRequestId_k__BackingField;

/// @brief Field queryOperationId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___queryOperationId;

/// @brief Field queryStream, offset: 0x48, size: 0x1, def value: None
 bool  ___queryStream;

/// @brief Field queryParameters, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___queryParameters;

/// @brief Field _clipStream, offset: 0x58, size: 0x8, def value: None
 ::Meta::Voice::Audio::IAudioClipStream*  ____clipStream;

/// @brief Field loadState, offset: 0x60, size: 0x4, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipLoadState  ___loadState;

/// @brief Field loadProgress, offset: 0x64, size: 0x4, def value: None
 float_t  ___loadProgress;

/// @brief Field readyDuration, offset: 0x68, size: 0x4, def value: None
 float_t  ___readyDuration;

/// @brief Field completeDuration, offset: 0x6c, size: 0x4, def value: None
 float_t  ___completeDuration;

/// @brief Field onStateChange, offset: 0x70, size: 0x8, def value: None
 ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::Meta::WitAi::TTS::Data::TTSClipLoadState>*  ___onStateChange;

/// @brief Field useEvents, offset: 0x78, size: 0x1, def value: None
 bool  ___useEvents;

/// [CompilerGenerated]
/// @brief Field <Events>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSEventContainer*  ____Events_k__BackingField;

/// @brief Field extension, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___extension;

/// [CompilerGenerated]
/// @brief Field <LoadStatusCode>k__BackingField, offset: 0x90, size: 0x4, def value: None
 int32_t  ____LoadStatusCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LoadError>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::StringW  ____LoadError_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LoadReady>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____LoadReady_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LoadCompletion>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____LoadCompletion_k__BackingField;

/// @brief Field onPlaybackReady, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  ___onPlaybackReady;

/// @brief Field onDownloadComplete, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___onDownloadComplete;

/// @brief Field onRequestBegin, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  ___onRequestBegin;

/// @brief Field onRequestComplete, offset: 0xc8, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  ___onRequestComplete;

/// @brief Field onPlaybackQueued, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  ___onPlaybackQueued;

/// @brief Field onPlaybackBegin, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  ___onPlaybackBegin;

/// @brief Field onPlaybackComplete, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  ___onPlaybackComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___textToSpeak) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___clipID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___audioType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___voiceSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___diskCacheSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ____queryRequestId_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___queryOperationId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___queryStream) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___queryParameters) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ____clipStream) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___loadState) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___loadProgress) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___readyDuration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___completeDuration) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___onStateChange) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___useEvents) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ____Events_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___extension) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ____LoadStatusCode_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ____LoadError_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ____LoadReady_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ____LoadCompletion_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___onPlaybackReady) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___onDownloadComplete) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___onRequestBegin) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___onRequestComplete) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___onPlaybackQueued) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___onPlaybackBegin) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSClipData, ___onPlaybackComplete) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSClipData) == 0xe8, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
