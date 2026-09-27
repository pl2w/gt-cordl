#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderOpus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDecoderOpus)
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class IAudioDecoder;
}
namespace Meta::Voice::UnityOpus {
class Decoder;
}
// Forward declare root types
namespace Meta::Voice::Audio::Decoding {
class AudioDecoderOpus;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::Decoding::AudioDecoderOpus*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::AudioDecoderOpus*, "Meta.Voice.Audio.Decoding", "AudioDecoderOpus");
// [Preserve]
// Dependencies System.Object
namespace Meta::Voice::Audio::Decoding {
// Is value type: false
// CS Name: Meta.Voice.Audio.Decoding.AudioDecoderOpus
class CORDL_TYPE AudioDecoderOpus : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_WillDecodeInBackground)) bool  WillDecodeInBackground;

/// @brief Field <WillDecodeInBackground>k__BackingField, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__WillDecodeInBackground_k__BackingField, put=__cordl_internal_set__WillDecodeInBackground_k__BackingField)) bool  _WillDecodeInBackground_k__BackingField;

/// @brief Field _decoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::Meta::Voice::UnityOpus::Decoder*  _decoder;

/// @brief Field _frameBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__frameBuffer, put=__cordl_internal_set__frameBuffer)) ::ArrayW<uint8_t>  _frameBuffer;

/// @brief Field _frameLength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameLength, put=__cordl_internal_set__frameLength)) int32_t  _frameLength;

/// @brief Field _frameOffset, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameOffset, put=__cordl_internal_set__frameOffset)) int32_t  _frameOffset;

/// @brief Field _opusBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__opusBuffer, put=__cordl_internal_set__opusBuffer)) ::ArrayW<float_t>  _opusBuffer;

/// @brief Field _validHeader, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__validHeader, put=__cordl_internal_set__validHeader)) bool  _validHeader;

/// @brief Convert operator to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr operator  ::Meta::Voice::Audio::Decoding::IAudioDecoder*() noexcept;

/// @brief Method Decode, addr 0x9e701c0, size 0x10c, virtual true, abstract: false, final true
inline void Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded) ;

/// @brief Method DecodeFrameHeader, addr 0x9e702cc, size 0x1b8, virtual false, abstract: false, final false
inline int32_t DecodeFrameHeader(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength) ;

static inline ::Meta::Voice::Audio::Decoding::AudioDecoderOpus* New_ctor(int32_t  channels, int32_t  samplerate) ;

constexpr bool const& __cordl_internal_get__WillDecodeInBackground_k__BackingField() const;

constexpr bool& __cordl_internal_get__WillDecodeInBackground_k__BackingField() ;

constexpr ::Meta::Voice::UnityOpus::Decoder* const& __cordl_internal_get__decoder() const;

constexpr ::Meta::Voice::UnityOpus::Decoder*& __cordl_internal_get__decoder() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__frameBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__frameBuffer() ;

constexpr int32_t const& __cordl_internal_get__frameLength() const;

constexpr int32_t& __cordl_internal_get__frameLength() ;

constexpr int32_t const& __cordl_internal_get__frameOffset() const;

constexpr int32_t& __cordl_internal_get__frameOffset() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__opusBuffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__opusBuffer() ;

constexpr bool const& __cordl_internal_get__validHeader() const;

constexpr bool& __cordl_internal_get__validHeader() ;

constexpr void __cordl_internal_set__WillDecodeInBackground_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__decoder(::Meta::Voice::UnityOpus::Decoder*  value) ;

constexpr void __cordl_internal_set__frameBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__frameLength(int32_t  value) ;

constexpr void __cordl_internal_set__frameOffset(int32_t  value) ;

constexpr void __cordl_internal_set__opusBuffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__validHeader(bool  value) ;

/// @brief Method .ctor, addr 0x9e700c0, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(int32_t  channels, int32_t  samplerate) ;

/// [CompilerGenerated]
/// @brief Method get_WillDecodeInBackground, addr 0x9e701b8, size 0x8, virtual true, abstract: false, final true
inline bool get_WillDecodeInBackground() ;

/// @brief Convert to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* i___Meta__Voice__Audio__Decoding__IAudioDecoder() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDecoderOpus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderOpus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDecoderOpus(AudioDecoderOpus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderOpus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDecoderOpus(AudioDecoderOpus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25523};

/// @brief Field _decoder, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::UnityOpus::Decoder*  ____decoder;

/// @brief Field _frameBuffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____frameBuffer;

/// @brief Field _opusBuffer, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ____opusBuffer;

/// @brief Field _frameLength, offset: 0x28, size: 0x4, def value: None
 int32_t  ____frameLength;

/// @brief Field _validHeader, offset: 0x2c, size: 0x1, def value: None
 bool  ____validHeader;

/// @brief Field _frameOffset, offset: 0x30, size: 0x4, def value: None
 int32_t  ____frameOffset;

/// [CompilerGenerated]
/// @brief Field <WillDecodeInBackground>k__BackingField, offset: 0x34, size: 0x1, def value: None
 bool  ____WillDecodeInBackground_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderOpus, ____decoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderOpus, ____frameBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderOpus, ____opusBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderOpus, ____frameLength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderOpus, ____validHeader) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderOpus, ____frameOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderOpus, ____WillDecodeInBackground_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::Decoding::AudioDecoderOpus) == 0x38, "Size mismatch!");

} // namespace end def Meta::Voice::Audio::Decoding
