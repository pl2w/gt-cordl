#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/RawAudioClipStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Audio/zzzz__BaseAudioClipStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RawAudioClipStream)
// Forward declare root types
namespace Meta::Voice::Audio {
class RawAudioClipStream;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::RawAudioClipStream*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::RawAudioClipStream*, "Meta.Voice.Audio", "RawAudioClipStream");
// Dependencies Meta.Voice.Audio.BaseAudioClipStream
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.RawAudioClipStream
class CORDL_TYPE RawAudioClipStream : public ::Meta::Voice::Audio::BaseAudioClipStream {
public:
// Declarations
 __declspec(property(get=get_SampleBuffer)) ::ArrayW<float_t>  SampleBuffer;

/// @brief Field <SampleBuffer>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__SampleBuffer_k__BackingField, put=__cordl_internal_set__SampleBuffer_k__BackingField)) ::ArrayW<float_t>  _SampleBuffer_k__BackingField;

/// @brief Method AddSamples, addr 0x9e6cb90, size 0xa8, virtual true, abstract: false, final false
inline void AddSamples(::ArrayW<float_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength) ;

static inline ::Meta::Voice::Audio::RawAudioClipStream* New_ctor(int32_t  newChannels, int32_t  newSampleRate, float_t  newReadyLength, float_t  newMaxLength) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__SampleBuffer_k__BackingField() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__SampleBuffer_k__BackingField() ;

constexpr void __cordl_internal_set__SampleBuffer_k__BackingField(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x9e6caa8, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(int32_t  newChannels, int32_t  newSampleRate, float_t  newReadyLength, float_t  newMaxLength) ;

/// [CompilerGenerated]
/// @brief Method get_SampleBuffer, addr 0x9e6caa0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_SampleBuffer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RawAudioClipStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RawAudioClipStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RawAudioClipStream(RawAudioClipStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RawAudioClipStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RawAudioClipStream(RawAudioClipStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25515};

/// [CompilerGenerated]
/// @brief Field <SampleBuffer>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ____SampleBuffer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::RawAudioClipStream, ____SampleBuffer_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::RawAudioClipStream) == 0x58, "Size mismatch!");

} // namespace end def Meta::Voice::Audio
