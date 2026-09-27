#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/IAudioDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IAudioDecoder)
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
// Forward declare root types
namespace Meta::Voice::Audio::Decoding {
class IAudioDecoder;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::Decoding::IAudioDecoder*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::IAudioDecoder*, "Meta.Voice.Audio.Decoding", "IAudioDecoder");
// Dependencies 
namespace Meta::Voice::Audio::Decoding {
// Is value type: false
// CS Name: Meta.Voice.Audio.Decoding.IAudioDecoder
class CORDL_TYPE IAudioDecoder {
public:
// Declarations
 __declspec(property(get=get_WillDecodeInBackground)) bool  WillDecodeInBackground;

/// @brief Method Decode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded) ;

/// @brief Method get_WillDecodeInBackground, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_WillDecodeInBackground() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioDecoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioDecoder(IAudioDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25529};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice::Audio::Decoding
