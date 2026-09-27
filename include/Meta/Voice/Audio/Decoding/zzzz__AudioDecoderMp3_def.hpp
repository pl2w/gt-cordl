#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderMp3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDecoderMp3)
namespace Meta::Voice::Audio::Decoding {
class AudioDecoderMp3Frame;
}
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class IAudioDecoder;
}
// Forward declare root types
namespace Meta::Voice::Audio::Decoding {
class AudioDecoderMp3;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::Decoding::AudioDecoderMp3*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::AudioDecoderMp3*, "Meta.Voice.Audio.Decoding", "AudioDecoderMp3");
// [Preserve]
// Dependencies System.Object
namespace Meta::Voice::Audio::Decoding {
// Is value type: false
// CS Name: Meta.Voice.Audio.Decoding.AudioDecoderMp3
class CORDL_TYPE AudioDecoderMp3 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_WillDecodeInBackground)) bool  WillDecodeInBackground;

/// @brief Field _frame, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__frame, put=__cordl_internal_set__frame)) ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*  _frame;

/// @brief Convert operator to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr operator  ::Meta::Voice::Audio::Decoding::IAudioDecoder*() noexcept;

/// @brief Method Decode, addr 0x9e6e594, size 0x68, virtual true, abstract: false, final true
inline void Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded) ;

static inline ::Meta::Voice::Audio::Decoding::AudioDecoderMp3* New_ctor() ;

constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame* const& __cordl_internal_get__frame() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*& __cordl_internal_get__frame() ;

constexpr void __cordl_internal_set__frame(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*  value) ;

/// @brief Method .ctor, addr 0x9e6eca0, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WillDecodeInBackground, addr 0x9e6e58c, size 0x8, virtual true, abstract: false, final true
inline bool get_WillDecodeInBackground() ;

/// @brief Convert to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* i___Meta__Voice__Audio__Decoding__IAudioDecoder() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDecoderMp3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderMp3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDecoderMp3(AudioDecoderMp3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderMp3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDecoderMp3(AudioDecoderMp3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25521};

/// @brief Field _frame, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*  ____frame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3, ____frame) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3) == 0x18, "Size mismatch!");

} // namespace end def Meta::Voice::Audio::Decoding
