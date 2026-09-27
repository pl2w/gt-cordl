#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderWav.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderPcm_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDecoderWav)
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
// Forward declare root types
namespace Meta::Voice::Audio::Decoding {
class AudioDecoderWav;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::Decoding::AudioDecoderWav*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::AudioDecoderWav*, "Meta.Voice.Audio.Decoding", "AudioDecoderWav");
// [Preserve]
// Dependencies Meta.Voice.Audio.Decoding.AudioDecoderPcm
namespace Meta::Voice::Audio::Decoding {
// Is value type: false
// CS Name: Meta.Voice.Audio.Decoding.AudioDecoderWav
class CORDL_TYPE AudioDecoderWav : public ::Meta::Voice::Audio::Decoding::AudioDecoderPcm {
public:
// Declarations
/// @brief Field DataDescriptor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DataDescriptor, put=setStaticF_DataDescriptor)) ::ArrayW<uint8_t>  DataDescriptor;

/// @brief Field _subChunkHeader, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__subChunkHeader, put=__cordl_internal_set__subChunkHeader)) ::ArrayW<uint8_t>  _subChunkHeader;

/// @brief Field _subChunkIsData, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__subChunkIsData, put=__cordl_internal_set__subChunkIsData)) bool  _subChunkIsData;

/// @brief Field _subChunkLength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__subChunkLength, put=__cordl_internal_set__subChunkLength)) int32_t  _subChunkLength;

/// @brief Field _subChunkOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__subChunkOffset, put=__cordl_internal_set__subChunkOffset)) int32_t  _subChunkOffset;

/// @brief Method Decode, addr 0x9e70a6c, size 0xc4, virtual true, abstract: false, final false
inline void Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded) ;

/// @brief Method DecodeSubChunkHeader, addr 0x9e70b30, size 0x11c, virtual false, abstract: false, final false
inline int32_t DecodeSubChunkHeader(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength) ;

/// @brief [Preserve]
static inline ::Meta::Voice::Audio::Decoding::AudioDecoderWav* New_ctor(int32_t  sampleBufferLength) ;

/// @brief Method SubArrayEquals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool SubArrayEquals(::ArrayW<T>  array1, int32_t  offset1, ::ArrayW<T>  array2, int32_t  offset2, int32_t  length) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__subChunkHeader() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__subChunkHeader() ;

constexpr bool const& __cordl_internal_get__subChunkIsData() const;

constexpr bool& __cordl_internal_get__subChunkIsData() ;

constexpr int32_t const& __cordl_internal_get__subChunkLength() const;

constexpr int32_t& __cordl_internal_get__subChunkLength() ;

constexpr int32_t const& __cordl_internal_get__subChunkOffset() const;

constexpr int32_t& __cordl_internal_get__subChunkOffset() ;

constexpr void __cordl_internal_set__subChunkHeader(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__subChunkIsData(bool  value) ;

constexpr void __cordl_internal_set__subChunkLength(int32_t  value) ;

constexpr void __cordl_internal_set__subChunkOffset(int32_t  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e709f0, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleBufferLength) ;

static inline ::ArrayW<uint8_t> getStaticF_DataDescriptor() ;

static inline void setStaticF_DataDescriptor(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDecoderWav() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderWav", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDecoderWav(AudioDecoderWav && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderWav", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDecoderWav(AudioDecoderWav const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25527};

/// @brief Field _subChunkOffset, offset: 0x38, size: 0x4, def value: None
 int32_t  ____subChunkOffset;

/// @brief Field _subChunkHeader, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____subChunkHeader;

/// @brief Field _subChunkIsData, offset: 0x48, size: 0x1, def value: None
 bool  ____subChunkIsData;

/// @brief Field _subChunkLength, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____subChunkLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderWav, ____subChunkOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderWav, ____subChunkHeader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderWav, ____subChunkIsData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderWav, ____subChunkLength) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::Decoding::AudioDecoderWav) == 0x50, "Size mismatch!");

} // namespace end def Meta::Voice::Audio::Decoding
