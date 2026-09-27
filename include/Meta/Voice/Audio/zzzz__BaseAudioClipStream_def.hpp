#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/BaseAudioClipStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseAudioClipStream)
namespace Meta::Voice::Audio {
class AudioClipStreamDelegate;
}
namespace Meta::Voice::Audio {
class AudioClipStreamSampleDelegate;
}
namespace Meta::Voice::Audio {
class IAudioClipStream;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class BaseAudioClipStream;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::BaseAudioClipStream*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::BaseAudioClipStream*, "Meta.Voice.Audio", "BaseAudioClipStream");
// Dependencies System.Object
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.BaseAudioClipStream
class CORDL_TYPE BaseAudioClipStream : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AddedSamples, put=set_AddedSamples)) int32_t  AddedSamples;

 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_ExpectedSamples, put=set_ExpectedSamples)) int32_t  ExpectedSamples;

 __declspec(property(get=get_IsComplete, put=set_IsComplete)) bool  IsComplete;

 __declspec(property(get=get_IsReady, put=set_IsReady)) bool  IsReady;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_OnAddSamples, put=set_OnAddSamples)) ::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  OnAddSamples;

 __declspec(property(get=get_OnStreamComplete, put=set_OnStreamComplete)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  OnStreamComplete;

 __declspec(property(get=get_OnStreamReady, put=set_OnStreamReady)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  OnStreamReady;

 __declspec(property(get=get_OnStreamUnloaded, put=set_OnStreamUnloaded)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  OnStreamUnloaded;

 __declspec(property(put=set_OnStreamUpdated)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  OnStreamUpdated;

 __declspec(property(get=get_SampleRate)) int32_t  SampleRate;

 __declspec(property(get=get_StreamReadyLength)) float_t  StreamReadyLength;

 __declspec(property(get=get_TotalSamples)) int32_t  TotalSamples;

/// @brief Field <AddedSamples>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__AddedSamples_k__BackingField, put=__cordl_internal_set__AddedSamples_k__BackingField)) int32_t  _AddedSamples_k__BackingField;

/// @brief Field <Channels>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Channels_k__BackingField, put=__cordl_internal_set__Channels_k__BackingField)) int32_t  _Channels_k__BackingField;

/// @brief Field <ExpectedSamples>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__ExpectedSamples_k__BackingField, put=__cordl_internal_set__ExpectedSamples_k__BackingField)) int32_t  _ExpectedSamples_k__BackingField;

/// @brief Field <IsComplete>k__BackingField, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsComplete_k__BackingField, put=__cordl_internal_set__IsComplete_k__BackingField)) bool  _IsComplete_k__BackingField;

/// @brief Field <IsReady>k__BackingField, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReady_k__BackingField, put=__cordl_internal_set__IsReady_k__BackingField)) bool  _IsReady_k__BackingField;

/// @brief Field <OnAddSamples>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnAddSamples_k__BackingField, put=__cordl_internal_set__OnAddSamples_k__BackingField)) ::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  _OnAddSamples_k__BackingField;

/// @brief Field <OnStreamComplete>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnStreamComplete_k__BackingField, put=__cordl_internal_set__OnStreamComplete_k__BackingField)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  _OnStreamComplete_k__BackingField;

/// @brief Field <OnStreamReady>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnStreamReady_k__BackingField, put=__cordl_internal_set__OnStreamReady_k__BackingField)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  _OnStreamReady_k__BackingField;

/// @brief Field <OnStreamUnloaded>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnStreamUnloaded_k__BackingField, put=__cordl_internal_set__OnStreamUnloaded_k__BackingField)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  _OnStreamUnloaded_k__BackingField;

/// @brief Field <OnStreamUpdated>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnStreamUpdated_k__BackingField, put=__cordl_internal_set__OnStreamUpdated_k__BackingField)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  _OnStreamUpdated_k__BackingField;

/// @brief Field <SampleRate>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__SampleRate_k__BackingField, put=__cordl_internal_set__SampleRate_k__BackingField)) int32_t  _SampleRate_k__BackingField;

/// @brief Field <StreamReadyLength>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__StreamReadyLength_k__BackingField, put=__cordl_internal_set__StreamReadyLength_k__BackingField)) float_t  _StreamReadyLength_k__BackingField;

/// @brief Convert operator to "::Meta::Voice::Audio::IAudioClipStream"
constexpr operator  ::Meta::Voice::Audio::IAudioClipStream*() noexcept;

/// @brief Method AddSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length) ;

/// @brief Method GetLength, addr 0x9e6c7e0, size 0x14, virtual false, abstract: false, final false
static inline float_t GetLength(int32_t  totalSamples, int32_t  channels, int32_t  samplesPerSecond) ;

/// @brief Method GetSampleLength, addr 0x9e6c420, size 0x18, virtual false, abstract: false, final false
inline float_t GetSampleLength(int32_t  totalSamples) ;

/// @brief Method HandleStreamComplete, addr 0x9e6c64c, size 0xa8, virtual false, abstract: false, final false
inline void HandleStreamComplete() ;

/// @brief Method HandleStreamReady, addr 0x9e6c5a4, size 0xa8, virtual false, abstract: false, final false
inline void HandleStreamReady() ;

/// @brief Method IsEnoughBuffered, addr 0x9e6c6f4, size 0x60, virtual true, abstract: false, final false
inline bool IsEnoughBuffered() ;

static inline ::Meta::Voice::Audio::BaseAudioClipStream* New_ctor(int32_t  newChannels, int32_t  newSampleRate, float_t  newStreamReadyLength) ;

/// @brief Method RaiseStreamComplete, addr 0x9e6c774, size 0x20, virtual true, abstract: false, final false
inline void RaiseStreamComplete() ;

/// @brief Method RaiseStreamReady, addr 0x9e6c754, size 0x20, virtual true, abstract: false, final false
inline void RaiseStreamReady() ;

/// @brief Method Reset, addr 0x9e6c4bc, size 0x60, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetExpectedSamples, addr 0x9e6c51c, size 0x24, virtual true, abstract: false, final false
inline void SetExpectedSamples(int32_t  expectedSamples) ;

/// @brief Method Unload, addr 0x9e6c794, size 0x4c, virtual true, abstract: false, final false
inline void Unload() ;

/// @brief Method UpdateState, addr 0x9e6c540, size 0x64, virtual true, abstract: false, final false
inline void UpdateState() ;

constexpr int32_t const& __cordl_internal_get__AddedSamples_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__AddedSamples_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Channels_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Channels_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ExpectedSamples_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ExpectedSamples_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsComplete_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsComplete_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsReady_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReady_k__BackingField() ;

constexpr ::Meta::Voice::Audio::AudioClipStreamSampleDelegate* const& __cordl_internal_get__OnAddSamples_k__BackingField() const;

constexpr ::Meta::Voice::Audio::AudioClipStreamSampleDelegate*& __cordl_internal_get__OnAddSamples_k__BackingField() ;

constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate* const& __cordl_internal_get__OnStreamComplete_k__BackingField() const;

constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate*& __cordl_internal_get__OnStreamComplete_k__BackingField() ;

constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate* const& __cordl_internal_get__OnStreamReady_k__BackingField() const;

constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate*& __cordl_internal_get__OnStreamReady_k__BackingField() ;

constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate* const& __cordl_internal_get__OnStreamUnloaded_k__BackingField() const;

constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate*& __cordl_internal_get__OnStreamUnloaded_k__BackingField() ;

constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate* const& __cordl_internal_get__OnStreamUpdated_k__BackingField() const;

constexpr ::Meta::Voice::Audio::AudioClipStreamDelegate*& __cordl_internal_get__OnStreamUpdated_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SampleRate_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SampleRate_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__StreamReadyLength_k__BackingField() const;

constexpr float_t& __cordl_internal_get__StreamReadyLength_k__BackingField() ;

constexpr void __cordl_internal_set__AddedSamples_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Channels_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ExpectedSamples_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsComplete_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsReady_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OnAddSamples_k__BackingField(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  value) ;

constexpr void __cordl_internal_set__OnStreamComplete_k__BackingField(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

constexpr void __cordl_internal_set__OnStreamReady_k__BackingField(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

constexpr void __cordl_internal_set__OnStreamUnloaded_k__BackingField(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

constexpr void __cordl_internal_set__OnStreamUpdated_k__BackingField(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

constexpr void __cordl_internal_set__SampleRate_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__StreamReadyLength_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x9e6c480, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  newChannels, int32_t  newSampleRate, float_t  newStreamReadyLength) ;

/// [CompilerGenerated]
/// @brief Method get_AddedSamples, addr 0x9e6c3cc, size 0x8, virtual true, abstract: false, final true
inline int32_t get_AddedSamples() ;

/// [CompilerGenerated]
/// @brief Method get_Channels, addr 0x9e6c394, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Channels() ;

/// [CompilerGenerated]
/// @brief Method get_ExpectedSamples, addr 0x9e6c3dc, size 0x8, virtual true, abstract: false, final true
inline int32_t get_ExpectedSamples() ;

/// [CompilerGenerated]
/// @brief Method get_IsComplete, addr 0x9e6c3bc, size 0x8, virtual true, abstract: false, final true
inline bool get_IsComplete() ;

/// [CompilerGenerated]
/// @brief Method get_IsReady, addr 0x9e6c3ac, size 0x8, virtual true, abstract: false, final true
inline bool get_IsReady() ;

/// @brief Method get_Length, addr 0x9e6c3fc, size 0x24, virtual true, abstract: false, final true
inline float_t get_Length() ;

/// [CompilerGenerated]
/// @brief Method get_OnAddSamples, addr 0x9e6c438, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Audio::AudioClipStreamSampleDelegate* get_OnAddSamples() ;

/// [CompilerGenerated]
/// @brief Method get_OnStreamComplete, addr 0x9e6c460, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* get_OnStreamComplete() ;

/// [CompilerGenerated]
/// @brief Method get_OnStreamReady, addr 0x9e6c448, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* get_OnStreamReady() ;

/// [CompilerGenerated]
/// @brief Method get_OnStreamUnloaded, addr 0x9e6c470, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* get_OnStreamUnloaded() ;

/// [CompilerGenerated]
/// @brief Method get_SampleRate, addr 0x9e6c39c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_SampleRate() ;

/// [CompilerGenerated]
/// @brief Method get_StreamReadyLength, addr 0x9e6c3a4, size 0x8, virtual true, abstract: false, final true
inline float_t get_StreamReadyLength() ;

/// @brief Method get_TotalSamples, addr 0x9e6c3ec, size 0x10, virtual true, abstract: false, final true
inline int32_t get_TotalSamples() ;

/// @brief Convert to "::Meta::Voice::Audio::IAudioClipStream"
constexpr ::Meta::Voice::Audio::IAudioClipStream* i___Meta__Voice__Audio__IAudioClipStream() noexcept;

/// [CompilerGenerated]
/// @brief Method set_AddedSamples, addr 0x9e6c3d4, size 0x8, virtual false, abstract: false, final false
inline void set_AddedSamples(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ExpectedSamples, addr 0x9e6c3e4, size 0x8, virtual false, abstract: false, final false
inline void set_ExpectedSamples(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsComplete, addr 0x9e6c3c4, size 0x8, virtual false, abstract: false, final false
inline void set_IsComplete(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsReady, addr 0x9e6c3b4, size 0x8, virtual false, abstract: false, final false
inline void set_IsReady(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnAddSamples, addr 0x9e6c440, size 0x8, virtual true, abstract: false, final true
inline void set_OnAddSamples(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnStreamComplete, addr 0x9e6c468, size 0x8, virtual true, abstract: false, final true
inline void set_OnStreamComplete(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnStreamReady, addr 0x9e6c450, size 0x8, virtual true, abstract: false, final true
inline void set_OnStreamReady(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnStreamUnloaded, addr 0x9e6c478, size 0x8, virtual true, abstract: false, final true
inline void set_OnStreamUnloaded(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnStreamUpdated, addr 0x9e6c458, size 0x8, virtual true, abstract: false, final true
inline void set_OnStreamUpdated(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseAudioClipStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioClipStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseAudioClipStream(BaseAudioClipStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseAudioClipStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseAudioClipStream(BaseAudioClipStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25504};

/// [CompilerGenerated]
/// @brief Field <Channels>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Channels_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SampleRate>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____SampleRate_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StreamReadyLength>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  ____StreamReadyLength_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsReady>k__BackingField, offset: 0x1c, size: 0x1, def value: None
 bool  ____IsReady_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsComplete>k__BackingField, offset: 0x1d, size: 0x1, def value: None
 bool  ____IsComplete_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AddedSamples>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____AddedSamples_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ExpectedSamples>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____ExpectedSamples_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnAddSamples>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  ____OnAddSamples_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnStreamReady>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Meta::Voice::Audio::AudioClipStreamDelegate*  ____OnStreamReady_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnStreamUpdated>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Meta::Voice::Audio::AudioClipStreamDelegate*  ____OnStreamUpdated_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnStreamComplete>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Meta::Voice::Audio::AudioClipStreamDelegate*  ____OnStreamComplete_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnStreamUnloaded>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Meta::Voice::Audio::AudioClipStreamDelegate*  ____OnStreamUnloaded_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____Channels_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____SampleRate_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____StreamReadyLength_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____IsReady_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____IsComplete_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____AddedSamples_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____ExpectedSamples_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____OnAddSamples_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____OnStreamReady_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____OnStreamUpdated_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____OnStreamComplete_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::BaseAudioClipStream, ____OnStreamUnloaded_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::BaseAudioClipStream) == 0x50, "Size mismatch!");

} // namespace end def Meta::Voice::Audio
