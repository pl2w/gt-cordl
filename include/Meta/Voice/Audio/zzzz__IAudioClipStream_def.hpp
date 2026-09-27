#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/IAudioClipStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioClipStream)
namespace Meta::Voice::Audio {
class AudioClipStreamDelegate;
}
namespace Meta::Voice::Audio {
class AudioClipStreamSampleDelegate;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class IAudioClipStream;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::IAudioClipStream*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::IAudioClipStream*, "Meta.Voice.Audio", "IAudioClipStream");
// Dependencies 
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.IAudioClipStream
class CORDL_TYPE IAudioClipStream {
public:
// Declarations
 __declspec(property(get=get_AddedSamples)) int32_t  AddedSamples;

 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_IsComplete)) bool  IsComplete;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_OnAddSamples, put=set_OnAddSamples)) ::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  OnAddSamples;

 __declspec(property(put=set_OnStreamComplete)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  OnStreamComplete;

 __declspec(property(get=get_OnStreamReady, put=set_OnStreamReady)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  OnStreamReady;

 __declspec(property(get=get_OnStreamUnloaded, put=set_OnStreamUnloaded)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  OnStreamUnloaded;

 __declspec(property(put=set_OnStreamUpdated)) ::Meta::Voice::Audio::AudioClipStreamDelegate*  OnStreamUpdated;

 __declspec(property(get=get_SampleRate)) int32_t  SampleRate;

 __declspec(property(get=get_TotalSamples)) int32_t  TotalSamples;

/// @brief Method AddSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length) ;

/// @brief Method SetExpectedSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetExpectedSamples(int32_t  expectedSamples) ;

/// @brief Method Unload, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Unload() ;

/// @brief Method get_AddedSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_AddedSamples() ;

/// @brief Method get_Channels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Channels() ;

/// @brief Method get_IsComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsComplete() ;

/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Length() ;

/// @brief Method get_OnAddSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Audio::AudioClipStreamSampleDelegate* get_OnAddSamples() ;

/// @brief Method get_OnStreamReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* get_OnStreamReady() ;

/// @brief Method get_OnStreamUnloaded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::Voice::Audio::AudioClipStreamDelegate* get_OnStreamUnloaded() ;

/// @brief Method get_SampleRate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_SampleRate() ;

/// @brief Method get_TotalSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_TotalSamples() ;

/// @brief Method set_OnAddSamples, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnAddSamples(::Meta::Voice::Audio::AudioClipStreamSampleDelegate*  value) ;

/// @brief Method set_OnStreamComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnStreamComplete(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

/// @brief Method set_OnStreamReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnStreamReady(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

/// @brief Method set_OnStreamUnloaded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnStreamUnloaded(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

/// @brief Method set_OnStreamUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnStreamUpdated(::Meta::Voice::Audio::AudioClipStreamDelegate*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioClipStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioClipStream(IAudioClipStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25510};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Audio
