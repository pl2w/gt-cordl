#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderPcm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderPcmType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDecoderPcm)
namespace Meta::Voice::Audio::Decoding {
struct AudioDecoderPcmType;
}
namespace Meta::Voice::Audio::Decoding {
class AudioDecoderPcm_PcmDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class IAudioDecoder;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Audio::Decoding {
class AudioDecoderPcm;
}
namespace Meta::Voice::Audio::Decoding {
class AudioDecoderPcm_PcmDecodeDelegate;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::Decoding::AudioDecoderPcm*);
MARK_REF_T(::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::AudioDecoderPcm*, "Meta.Voice.Audio.Decoding", "AudioDecoderPcm");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*, "Meta.Voice.Audio.Decoding", "AudioDecoderPcm/PcmDecodeDelegate");
// [Preserve]
// Dependencies Meta.Voice.Audio.Decoding.AudioDecoderPcmType, System.Object
namespace Meta::Voice::Audio::Decoding {
// Is value type: false
// CS Name: Meta.Voice.Audio.Decoding.AudioDecoderPcm
class CORDL_TYPE AudioDecoderPcm : public ::System::Object {
public:
// Declarations
using PcmDecodeDelegate = ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate;

/// @brief Field PcmType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_PcmType, put=__cordl_internal_set_PcmType)) ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  PcmType;

 __declspec(property(get=get_WillDecodeInBackground)) bool  WillDecodeInBackground;

/// @brief Field _byteCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__byteCount, put=__cordl_internal_set__byteCount)) int32_t  _byteCount;

/// @brief Field _decoder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*  _decoder;

/// @brief Field _overflow, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__overflow, put=__cordl_internal_set__overflow)) ::ArrayW<uint8_t>  _overflow;

/// @brief Field _overflowOffset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__overflowOffset, put=__cordl_internal_set__overflowOffset)) int32_t  _overflowOffset;

/// @brief Field _samples, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__samples, put=__cordl_internal_set__samples)) ::ArrayW<float_t>  _samples;

/// @brief Convert operator to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr operator  ::Meta::Voice::Audio::Decoding::IAudioDecoder*() noexcept;

/// @brief Method Decode, addr 0x9e70654, size 0x21c, virtual true, abstract: false, final false
inline void Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded) ;

/// @brief Method DecodeSample_Pcm16, addr 0x9e70924, size 0x28, virtual false, abstract: false, final false
static inline float_t DecodeSample_Pcm16(::ArrayW<uint8_t>  rawData, int32_t  index) ;

/// @brief Method DecodeSample_Pcm32, addr 0x9e7094c, size 0x18, virtual false, abstract: false, final false
static inline float_t DecodeSample_Pcm32(::ArrayW<uint8_t>  rawData, int32_t  index) ;

/// @brief Method DecodeSample_Pcm64, addr 0x9e70964, size 0x1c, virtual false, abstract: false, final false
static inline float_t DecodeSample_Pcm64(::ArrayW<uint8_t>  rawData, int32_t  index) ;

/// @brief Method DecodeSample_PcmU16, addr 0x9e70980, size 0x28, virtual false, abstract: false, final false
static inline float_t DecodeSample_PcmU16(::ArrayW<uint8_t>  rawData, int32_t  index) ;

/// @brief Method DecodeSample_PcmU32, addr 0x9e709a8, size 0x18, virtual false, abstract: false, final false
static inline float_t DecodeSample_PcmU32(::ArrayW<uint8_t>  rawData, int32_t  index) ;

/// @brief Method DecodeSample_PcmU64, addr 0x9e709c0, size 0x1c, virtual false, abstract: false, final false
static inline float_t DecodeSample_PcmU64(::ArrayW<uint8_t>  rawData, int32_t  index) ;

/// @brief Method GetByteCount, addr 0x9e70560, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetByteCount(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  pcmType) ;

/// @brief Method GetPcmDecoder, addr 0x9e70580, size 0xcc, virtual false, abstract: false, final false
static inline ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate* GetPcmDecoder(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  pcmType) ;

/// @brief [Preserve]
static inline ::Meta::Voice::Audio::Decoding::AudioDecoderPcm* New_ctor(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  pcmType, int32_t  sampleBufferLength) ;

constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType const& __cordl_internal_get_PcmType() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType& __cordl_internal_get_PcmType() ;

constexpr int32_t const& __cordl_internal_get__byteCount() const;

constexpr int32_t& __cordl_internal_get__byteCount() ;

constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate* const& __cordl_internal_get__decoder() const;

constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*& __cordl_internal_get__decoder() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__overflow() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__overflow() ;

constexpr int32_t const& __cordl_internal_get__overflowOffset() const;

constexpr int32_t& __cordl_internal_get__overflowOffset() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__samples() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__samples() ;

constexpr void __cordl_internal_set_PcmType(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  value) ;

constexpr void __cordl_internal_set__byteCount(int32_t  value) ;

constexpr void __cordl_internal_set__decoder(::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*  value) ;

constexpr void __cordl_internal_set__overflow(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__overflowOffset(int32_t  value) ;

constexpr void __cordl_internal_set__samples(::ArrayW<float_t>  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e70484, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  pcmType, int32_t  sampleBufferLength) ;

/// @brief Method get_WillDecodeInBackground, addr 0x9e7064c, size 0x8, virtual true, abstract: false, final true
inline bool get_WillDecodeInBackground() ;

/// @brief Convert to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* i___Meta__Voice__Audio__Decoding__IAudioDecoder() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDecoderPcm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderPcm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDecoderPcm(AudioDecoderPcm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderPcm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDecoderPcm(AudioDecoderPcm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25526};

/// @brief Field PcmType, offset: 0x10, size: 0x4, def value: None
 ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  ___PcmType;

/// @brief Field _byteCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ____byteCount;

/// @brief Field _decoder, offset: 0x18, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*  ____decoder;

/// @brief Field _overflowOffset, offset: 0x20, size: 0x4, def value: None
 int32_t  ____overflowOffset;

/// @brief Field _overflow, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____overflow;

/// @brief Field _samples, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____samples;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderPcm, ___PcmType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderPcm, ____byteCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderPcm, ____decoder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderPcm, ____overflowOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderPcm, ____overflow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderPcm, ____samples) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::Decoding::AudioDecoderPcm) == 0x38, "Size mismatch!");

} // namespace end def Meta::Voice::Audio::Decoding
// Dependencies System.MulticastDelegate
namespace Meta::Voice::Audio::Decoding {
// Is value type: false
// CS Name: Meta.Voice.Audio.Decoding.AudioDecoderPcm/PcmDecodeDelegate
class CORDL_TYPE AudioDecoderPcm_PcmDecodeDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x9e709dc, size 0x14, virtual true, abstract: false, final false
inline float_t Invoke(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset) ;

static inline ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9e70870, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDecoderPcm_PcmDecodeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderPcm_PcmDecodeDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDecoderPcm_PcmDecodeDelegate(AudioDecoderPcm_PcmDecodeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderPcm_PcmDecodeDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDecoderPcm_PcmDecodeDelegate(AudioDecoderPcm_PcmDecodeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25525};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate) == 0x80, "Size mismatch!");

} // namespace end def Meta::Voice::Audio::Decoding
