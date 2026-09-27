#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderJson.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDecoderJson)
namespace Meta::Voice::Audio::Decoding {
class AudioJsonDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class IAudioDecoder;
}
namespace Meta::Voice::Net::Encoding::Wit {
class WitChunkConverter;
}
namespace Meta::Voice::Net::Encoding::Wit {
struct WitChunk;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::Voice::Audio::Decoding {
class AudioDecoderJson;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::Decoding::AudioDecoderJson*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::AudioDecoderJson*, "Meta.Voice.Audio.Decoding", "AudioDecoderJson");
// [Preserve]
// Dependencies System.Object
namespace Meta::Voice::Audio::Decoding {
// Is value type: false
// CS Name: Meta.Voice.Audio.Decoding.AudioDecoderJson
class CORDL_TYPE AudioDecoderJson : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_WillDecodeInBackground)) bool  WillDecodeInBackground;

/// @brief Field _audioDecoder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioDecoder, put=__cordl_internal_set__audioDecoder)) ::Meta::Voice::Audio::Decoding::IAudioDecoder*  _audioDecoder;

/// @brief Field _chunkDecoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__chunkDecoder, put=__cordl_internal_set__chunkDecoder)) ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*  _chunkDecoder;

/// @brief Field _decodedJson, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__decodedJson, put=__cordl_internal_set__decodedJson)) ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  _decodedJson;

/// @brief Field _onJsonDecoded, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__onJsonDecoded, put=__cordl_internal_set__onJsonDecoded)) ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  _onJsonDecoded;

/// @brief Field _onSamplesDecoded, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSamplesDecoded, put=__cordl_internal_set__onSamplesDecoded)) ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  _onSamplesDecoded;

/// @brief Convert operator to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr operator  ::Meta::Voice::Audio::Decoding::IAudioDecoder*() noexcept;

/// @brief Method Decode, addr 0x9e6e1a8, size 0x1cc, virtual true, abstract: false, final true
inline void Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded) ;

/// @brief Method DecodeAudio, addr 0x9e6e4c0, size 0xcc, virtual false, abstract: false, final false
inline void DecodeAudio(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength) ;

/// @brief Method DecodeJson, addr 0x9e6e374, size 0x14c, virtual false, abstract: false, final false
inline void DecodeJson(::Meta::Voice::Net::Encoding::Wit::WitChunk  chunk) ;

static inline ::Meta::Voice::Audio::Decoding::AudioDecoderJson* New_ctor(::Meta::Voice::Audio::Decoding::IAudioDecoder*  audioDecoder, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded) ;

constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* const& __cordl_internal_get__audioDecoder() const;

constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder*& __cordl_internal_get__audioDecoder() ;

constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter* const& __cordl_internal_get__chunkDecoder() const;

constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*& __cordl_internal_get__chunkDecoder() ;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>* const& __cordl_internal_get__decodedJson() const;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*& __cordl_internal_get__decodedJson() ;

constexpr ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate* const& __cordl_internal_get__onJsonDecoded() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*& __cordl_internal_get__onJsonDecoded() ;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& __cordl_internal_get__onSamplesDecoded() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& __cordl_internal_get__onSamplesDecoded() ;

constexpr void __cordl_internal_set__audioDecoder(::Meta::Voice::Audio::Decoding::IAudioDecoder*  value) ;

constexpr void __cordl_internal_set__chunkDecoder(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*  value) ;

constexpr void __cordl_internal_set__decodedJson(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  value) ;

constexpr void __cordl_internal_set__onJsonDecoded(::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  value) ;

constexpr void __cordl_internal_set__onSamplesDecoded(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value) ;

/// @brief Method .ctor, addr 0x9e6e0b4, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::Audio::Decoding::IAudioDecoder*  audioDecoder, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded) ;

/// @brief Method get_WillDecodeInBackground, addr 0x9e6e1a0, size 0x8, virtual true, abstract: false, final true
inline bool get_WillDecodeInBackground() ;

/// @brief Convert to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* i___Meta__Voice__Audio__Decoding__IAudioDecoder() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDecoderJson() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderJson", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDecoderJson(AudioDecoderJson && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderJson", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDecoderJson(AudioDecoderJson const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25520};

/// @brief Field _chunkDecoder, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*  ____chunkDecoder;

/// @brief Field _decodedJson, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  ____decodedJson;

/// @brief Field _onJsonDecoded, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  ____onJsonDecoded;

/// @brief Field _audioDecoder, offset: 0x28, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::IAudioDecoder*  ____audioDecoder;

/// @brief Field _onSamplesDecoded, offset: 0x30, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  ____onSamplesDecoded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderJson, ____chunkDecoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderJson, ____decodedJson) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderJson, ____onJsonDecoded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderJson, ____audioDecoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderJson, ____onSamplesDecoded) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::Decoding::AudioDecoderJson) == 0x38, "Size mismatch!");

} // namespace end def Meta::Voice::Audio::Decoding
