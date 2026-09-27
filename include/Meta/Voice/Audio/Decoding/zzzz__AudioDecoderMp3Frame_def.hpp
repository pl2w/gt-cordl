#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderMp3Frame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/NLayer/zzzz__MpegChannelMode_def.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegLayer_def.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegVersion_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDecoderMp3Frame)
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::NLayer {
class IMpegFrame;
}
namespace Meta::Voice::NLayer {
struct MpegChannelMode;
}
namespace Meta::Voice::NLayer {
class MpegFrameDecoder;
}
namespace Meta::Voice::NLayer {
struct MpegLayer;
}
namespace Meta::Voice::NLayer {
struct MpegVersion;
}
// Forward declare root types
namespace Meta::Voice::Audio::Decoding {
class AudioDecoderMp3Frame;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*, "Meta.Voice.Audio.Decoding", "AudioDecoderMp3Frame");
// [Preserve]
// Dependencies Meta.Voice.NLayer.MpegChannelMode, Meta.Voice.NLayer.MpegLayer, Meta.Voice.NLayer.MpegVersion, System.Object
namespace Meta::Voice::Audio::Decoding {
// Is value type: false
// CS Name: Meta.Voice.Audio.Decoding.AudioDecoderMp3Frame
class CORDL_TYPE AudioDecoderMp3Frame : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BitRate, put=set_BitRate)) int32_t  BitRate;

 __declspec(property(get=get_BitRateIndex, put=set_BitRateIndex)) int32_t  BitRateIndex;

 __declspec(property(get=get_ChannelMode, put=set_ChannelMode)) ::Meta::Voice::NLayer::MpegChannelMode  ChannelMode;

 __declspec(property(get=get_ChannelModeExtension, put=set_ChannelModeExtension)) int32_t  ChannelModeExtension;

 __declspec(property(get=get_FrameLength, put=set_FrameLength)) int32_t  FrameLength;

 __declspec(property(get=get_HasCrc, put=set_HasCrc)) bool  HasCrc;

 __declspec(property(get=get_IsCopyrighted, put=set_IsCopyrighted)) bool  IsCopyrighted;

 __declspec(property(get=get_IsCorrupted, put=set_IsCorrupted)) bool  IsCorrupted;

 __declspec(property(get=get_IsHeaderDecoded)) bool  IsHeaderDecoded;

 __declspec(property(get=get_Layer, put=set_Layer)) ::Meta::Voice::NLayer::MpegLayer  Layer;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

 __declspec(property(get=get_SampleCount, put=set_SampleCount)) int32_t  SampleCount;

 __declspec(property(get=get_SampleRate, put=set_SampleRate)) int32_t  SampleRate;

 __declspec(property(get=get_SampleRateIndex, put=set_SampleRateIndex)) int32_t  SampleRateIndex;

 __declspec(property(get=get_Version, put=set_Version)) ::Meta::Voice::NLayer::MpegVersion  Version;

/// @brief Field <BitRateIndex>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__BitRateIndex_k__BackingField, put=__cordl_internal_set__BitRateIndex_k__BackingField)) int32_t  _BitRateIndex_k__BackingField;

/// @brief Field <BitRate>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__BitRate_k__BackingField, put=__cordl_internal_set__BitRate_k__BackingField)) int32_t  _BitRate_k__BackingField;

/// @brief Field <ChannelModeExtension>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ChannelModeExtension_k__BackingField, put=__cordl_internal_set__ChannelModeExtension_k__BackingField)) int32_t  _ChannelModeExtension_k__BackingField;

/// @brief Field <ChannelMode>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__ChannelMode_k__BackingField, put=__cordl_internal_set__ChannelMode_k__BackingField)) ::Meta::Voice::NLayer::MpegChannelMode  _ChannelMode_k__BackingField;

/// @brief Field <FrameLength>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__FrameLength_k__BackingField, put=__cordl_internal_set__FrameLength_k__BackingField)) int32_t  _FrameLength_k__BackingField;

/// @brief Field <HasCrc>k__BackingField, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasCrc_k__BackingField, put=__cordl_internal_set__HasCrc_k__BackingField)) bool  _HasCrc_k__BackingField;

/// @brief Field <IsCopyrighted>k__BackingField, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCopyrighted_k__BackingField, put=__cordl_internal_set__IsCopyrighted_k__BackingField)) bool  _IsCopyrighted_k__BackingField;

/// @brief Field <IsCorrupted>k__BackingField, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsCorrupted_k__BackingField, put=__cordl_internal_set__IsCorrupted_k__BackingField)) bool  _IsCorrupted_k__BackingField;

/// @brief Field <Layer>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layer_k__BackingField, put=__cordl_internal_set__Layer_k__BackingField)) ::Meta::Voice::NLayer::MpegLayer  _Layer_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <SampleCount>k__BackingField, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__SampleCount_k__BackingField, put=__cordl_internal_set__SampleCount_k__BackingField)) int32_t  _SampleCount_k__BackingField;

/// @brief Field <SampleRateIndex>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__SampleRateIndex_k__BackingField, put=__cordl_internal_set__SampleRateIndex_k__BackingField)) int32_t  _SampleRateIndex_k__BackingField;

/// @brief Field <SampleRate>k__BackingField, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__SampleRate_k__BackingField, put=__cordl_internal_set__SampleRate_k__BackingField)) int32_t  _SampleRate_k__BackingField;

/// @brief Field <Version>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__Version_k__BackingField, put=__cordl_internal_set__Version_k__BackingField)) ::Meta::Voice::NLayer::MpegVersion  _Version_k__BackingField;

/// @brief Field _bitBucket, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__bitBucket, put=__cordl_internal_set__bitBucket)) uint64_t  _bitBucket;

/// @brief Field _bitRateTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bitRateTable, put=setStaticF__bitRateTable)) ::ArrayW<::ArrayW<::ArrayW<int32_t>>>  _bitRateTable;

/// @brief Field _bitsRead, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__bitsRead, put=__cordl_internal_set__bitsRead)) int32_t  _bitsRead;

/// @brief Field _dataBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataBuffer, put=__cordl_internal_set__dataBuffer)) ::ArrayW<uint8_t>  _dataBuffer;

/// @brief Field _dataOffset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__dataOffset, put=__cordl_internal_set__dataOffset)) int32_t  _dataOffset;

/// @brief Field _decoder, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::Meta::Voice::NLayer::MpegFrameDecoder*  _decoder;

/// @brief Field _frameIndex, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameIndex, put=__cordl_internal_set__frameIndex)) uint32_t  _frameIndex;

/// @brief Field _readOffset, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__readOffset, put=__cordl_internal_set__readOffset)) int32_t  _readOffset;

/// @brief Field _sampleBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__sampleBuffer, put=__cordl_internal_set__sampleBuffer)) ::ArrayW<float_t>  _sampleBuffer;

/// @brief Convert operator to "::Meta::Voice::NLayer::IMpegFrame"
constexpr operator  ::Meta::Voice::NLayer::IMpegFrame*() noexcept;

/// @brief Method BitRShift, addr 0x9e6f45c, size 0x28, virtual false, abstract: false, final false
static inline int32_t BitRShift(int32_t  number, int32_t  bits) ;

/// @brief Method Clear, addr 0x9e6eee0, size 0x28, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Decode, addr 0x9e6e5fc, size 0x6a4, virtual false, abstract: false, final false
inline int32_t Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded) ;

/// @brief Method DecodeHeader, addr 0x9e6ef38, size 0x454, virtual false, abstract: false, final false
inline void DecodeHeader() ;

/// @brief Method GetBitString, addr 0x9e6f484, size 0x114, virtual false, abstract: false, final false
static inline ::StringW GetBitString(int32_t  headerData) ;

/// @brief Method GetMpegLayer, addr 0x9e6f670, size 0xcc, virtual false, abstract: false, final false
static inline ::Meta::Voice::NLayer::MpegLayer GetMpegLayer(int32_t  header) ;

/// @brief Method GetMpegVersion, addr 0x9e6f598, size 0xd8, virtual false, abstract: false, final false
static inline ::Meta::Voice::NLayer::MpegVersion GetMpegVersion(int32_t  header) ;

/// @brief Method GetSideDataSize, addr 0x9e6f73c, size 0x8c, virtual false, abstract: false, final false
inline int32_t GetSideDataSize() ;

static inline ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame* New_ctor() ;

/// @brief Method ReadBits, addr 0x9e6f7c8, size 0xe8, virtual true, abstract: false, final true
inline int32_t ReadBits(int32_t  bitCount) ;

/// @brief Method ReadByte, addr 0x9e6f8b0, size 0x64, virtual false, abstract: false, final false
inline int32_t ReadByte(int32_t  offset) ;

/// @brief Method Reset, addr 0x9e6ef08, size 0x30, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Reverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Reverse(::ArrayW<T>  array, int32_t  start, int32_t  length) ;

/// @brief Method ToString, addr 0x9e6f914, size 0x4cc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__BitRateIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__BitRateIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__BitRate_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__BitRate_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ChannelModeExtension_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ChannelModeExtension_k__BackingField() ;

constexpr ::Meta::Voice::NLayer::MpegChannelMode const& __cordl_internal_get__ChannelMode_k__BackingField() const;

constexpr ::Meta::Voice::NLayer::MpegChannelMode& __cordl_internal_get__ChannelMode_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FrameLength_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FrameLength_k__BackingField() ;

constexpr bool const& __cordl_internal_get__HasCrc_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasCrc_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsCopyrighted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCopyrighted_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsCorrupted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsCorrupted_k__BackingField() ;

constexpr ::Meta::Voice::NLayer::MpegLayer const& __cordl_internal_get__Layer_k__BackingField() const;

constexpr ::Meta::Voice::NLayer::MpegLayer& __cordl_internal_get__Layer_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SampleCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SampleCount_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SampleRateIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SampleRateIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SampleRate_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SampleRate_k__BackingField() ;

constexpr ::Meta::Voice::NLayer::MpegVersion const& __cordl_internal_get__Version_k__BackingField() const;

constexpr ::Meta::Voice::NLayer::MpegVersion& __cordl_internal_get__Version_k__BackingField() ;

constexpr uint64_t const& __cordl_internal_get__bitBucket() const;

constexpr uint64_t& __cordl_internal_get__bitBucket() ;

constexpr int32_t const& __cordl_internal_get__bitsRead() const;

constexpr int32_t& __cordl_internal_get__bitsRead() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__dataBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__dataBuffer() ;

constexpr int32_t const& __cordl_internal_get__dataOffset() const;

constexpr int32_t& __cordl_internal_get__dataOffset() ;

constexpr ::Meta::Voice::NLayer::MpegFrameDecoder* const& __cordl_internal_get__decoder() const;

constexpr ::Meta::Voice::NLayer::MpegFrameDecoder*& __cordl_internal_get__decoder() ;

constexpr uint32_t const& __cordl_internal_get__frameIndex() const;

constexpr uint32_t& __cordl_internal_get__frameIndex() ;

constexpr int32_t const& __cordl_internal_get__readOffset() const;

constexpr int32_t& __cordl_internal_get__readOffset() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__sampleBuffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__sampleBuffer() ;

constexpr void __cordl_internal_set__BitRateIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__BitRate_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ChannelModeExtension_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ChannelMode_k__BackingField(::Meta::Voice::NLayer::MpegChannelMode  value) ;

constexpr void __cordl_internal_set__FrameLength_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__HasCrc_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsCopyrighted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsCorrupted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Layer_k__BackingField(::Meta::Voice::NLayer::MpegLayer  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__SampleCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SampleRateIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__SampleRate_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Version_k__BackingField(::Meta::Voice::NLayer::MpegVersion  value) ;

constexpr void __cordl_internal_set__bitBucket(uint64_t  value) ;

constexpr void __cordl_internal_set__bitsRead(int32_t  value) ;

constexpr void __cordl_internal_set__dataBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__dataOffset(int32_t  value) ;

constexpr void __cordl_internal_set__decoder(::Meta::Voice::NLayer::MpegFrameDecoder*  value) ;

constexpr void __cordl_internal_set__frameIndex(uint32_t  value) ;

constexpr void __cordl_internal_set__readOffset(int32_t  value) ;

constexpr void __cordl_internal_set__sampleBuffer(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x9e6ed08, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<::ArrayW<int32_t>>> getStaticF__bitRateTable() ;

/// [CompilerGenerated]
/// @brief Method get_BitRate, addr 0x9e6f3dc, size 0x8, virtual true, abstract: false, final true
inline int32_t get_BitRate() ;

/// [CompilerGenerated]
/// @brief Method get_BitRateIndex, addr 0x9e6f3cc, size 0x8, virtual true, abstract: false, final true
inline int32_t get_BitRateIndex() ;

/// [CompilerGenerated]
/// @brief Method get_ChannelMode, addr 0x9e6f3ac, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::NLayer::MpegChannelMode get_ChannelMode() ;

/// [CompilerGenerated]
/// @brief Method get_ChannelModeExtension, addr 0x9e6f3bc, size 0x8, virtual true, abstract: false, final true
inline int32_t get_ChannelModeExtension() ;

/// [CompilerGenerated]
/// @brief Method get_FrameLength, addr 0x9e6f43c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_FrameLength() ;

/// [CompilerGenerated]
/// @brief Method get_HasCrc, addr 0x9e6f41c, size 0x8, virtual true, abstract: false, final true
inline bool get_HasCrc() ;

/// [CompilerGenerated]
/// @brief Method get_IsCopyrighted, addr 0x9e6f40c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsCopyrighted() ;

/// [CompilerGenerated]
/// @brief Method get_IsCorrupted, addr 0x9e6f42c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsCorrupted() ;

/// @brief Method get_IsHeaderDecoded, addr 0x9e6eed0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsHeaderDecoded() ;

/// [CompilerGenerated]
/// @brief Method get_Layer, addr 0x9e6f39c, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::NLayer::MpegLayer get_Layer() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e6eec8, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method get_SampleCount, addr 0x9e6f44c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_SampleCount() ;

/// [CompilerGenerated]
/// @brief Method get_SampleRate, addr 0x9e6f3fc, size 0x8, virtual true, abstract: false, final true
inline int32_t get_SampleRate() ;

/// [CompilerGenerated]
/// @brief Method get_SampleRateIndex, addr 0x9e6f3ec, size 0x8, virtual true, abstract: false, final true
inline int32_t get_SampleRateIndex() ;

/// [CompilerGenerated]
/// @brief Method get_Version, addr 0x9e6f38c, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::NLayer::MpegVersion get_Version() ;

/// @brief Convert to "::Meta::Voice::NLayer::IMpegFrame"
constexpr ::Meta::Voice::NLayer::IMpegFrame* i___Meta__Voice__NLayer__IMpegFrame() noexcept;

static inline void setStaticF__bitRateTable(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value) ;

/// [CompilerGenerated]
/// @brief Method set_BitRate, addr 0x9e6f3e4, size 0x8, virtual false, abstract: false, final false
inline void set_BitRate(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_BitRateIndex, addr 0x9e6f3d4, size 0x8, virtual false, abstract: false, final false
inline void set_BitRateIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ChannelMode, addr 0x9e6f3b4, size 0x8, virtual false, abstract: false, final false
inline void set_ChannelMode(::Meta::Voice::NLayer::MpegChannelMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_ChannelModeExtension, addr 0x9e6f3c4, size 0x8, virtual false, abstract: false, final false
inline void set_ChannelModeExtension(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FrameLength, addr 0x9e6f444, size 0x8, virtual false, abstract: false, final false
inline void set_FrameLength(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasCrc, addr 0x9e6f424, size 0x8, virtual false, abstract: false, final false
inline void set_HasCrc(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsCopyrighted, addr 0x9e6f414, size 0x8, virtual false, abstract: false, final false
inline void set_IsCopyrighted(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsCorrupted, addr 0x9e6f434, size 0x8, virtual false, abstract: false, final false
inline void set_IsCorrupted(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Layer, addr 0x9e6f3a4, size 0x8, virtual false, abstract: false, final false
inline void set_Layer(::Meta::Voice::NLayer::MpegLayer  value) ;

/// [CompilerGenerated]
/// @brief Method set_SampleCount, addr 0x9e6f454, size 0x8, virtual false, abstract: false, final false
inline void set_SampleCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SampleRate, addr 0x9e6f404, size 0x8, virtual false, abstract: false, final false
inline void set_SampleRate(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_SampleRateIndex, addr 0x9e6f3f4, size 0x8, virtual false, abstract: false, final false
inline void set_SampleRateIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Version, addr 0x9e6f394, size 0x8, virtual false, abstract: false, final false
inline void set_Version(::Meta::Voice::NLayer::MpegVersion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDecoderMp3Frame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderMp3Frame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDecoderMp3Frame(AudioDecoderMp3Frame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDecoderMp3Frame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDecoderMp3Frame(AudioDecoderMp3Frame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25522};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// @brief Field _dataBuffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____dataBuffer;

/// @brief Field _dataOffset, offset: 0x20, size: 0x4, def value: None
 int32_t  ____dataOffset;

/// @brief Field _sampleBuffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ____sampleBuffer;

/// @brief Field _decoder, offset: 0x30, size: 0x8, def value: None
 ::Meta::Voice::NLayer::MpegFrameDecoder*  ____decoder;

/// @brief Field _readOffset, offset: 0x38, size: 0x4, def value: None
 int32_t  ____readOffset;

/// @brief Field _bitBucket, offset: 0x40, size: 0x8, def value: None
 uint64_t  ____bitBucket;

/// @brief Field _bitsRead, offset: 0x48, size: 0x4, def value: None
 int32_t  ____bitsRead;

/// @brief Field _frameIndex, offset: 0x4c, size: 0x4, def value: None
 uint32_t  ____frameIndex;

/// [CompilerGenerated]
/// @brief Field <Version>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::Meta::Voice::NLayer::MpegVersion  ____Version_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Layer>k__BackingField, offset: 0x54, size: 0x4, def value: None
 ::Meta::Voice::NLayer::MpegLayer  ____Layer_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ChannelMode>k__BackingField, offset: 0x58, size: 0x4, def value: None
 ::Meta::Voice::NLayer::MpegChannelMode  ____ChannelMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ChannelModeExtension>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____ChannelModeExtension_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BitRateIndex>k__BackingField, offset: 0x60, size: 0x4, def value: None
 int32_t  ____BitRateIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BitRate>k__BackingField, offset: 0x64, size: 0x4, def value: None
 int32_t  ____BitRate_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SampleRateIndex>k__BackingField, offset: 0x68, size: 0x4, def value: None
 int32_t  ____SampleRateIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SampleRate>k__BackingField, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____SampleRate_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsCopyrighted>k__BackingField, offset: 0x70, size: 0x1, def value: None
 bool  ____IsCopyrighted_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HasCrc>k__BackingField, offset: 0x71, size: 0x1, def value: None
 bool  ____HasCrc_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsCorrupted>k__BackingField, offset: 0x72, size: 0x1, def value: None
 bool  ____IsCorrupted_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FrameLength>k__BackingField, offset: 0x74, size: 0x4, def value: None
 int32_t  ____FrameLength_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SampleCount>k__BackingField, offset: 0x78, size: 0x4, def value: None
 int32_t  ____SampleCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____Logger_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____dataBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____dataOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____sampleBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____decoder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____readOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____bitBucket) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____bitsRead) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____frameIndex) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____Version_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____Layer_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____ChannelMode_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____ChannelModeExtension_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____BitRateIndex_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____BitRate_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____SampleRateIndex_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____SampleRate_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____IsCopyrighted_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____HasCrc_k__BackingField) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____IsCorrupted_k__BackingField) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____FrameLength_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame, ____SampleCount_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame) == 0x80, "Size mismatch!");

} // namespace end def Meta::Voice::Audio::Decoding
