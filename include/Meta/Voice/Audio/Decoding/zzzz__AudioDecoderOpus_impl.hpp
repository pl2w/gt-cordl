#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderOpus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderOpus_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__IAudioDecoder_def.hpp"
#include "Meta/Voice/UnityOpus/zzzz__Decoder_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderOpus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderOpus::*)(int32_t, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderOpus::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e700c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderOpus*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderOpus.get_WillDecodeInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::Decoding::AudioDecoderOpus::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderOpus::get_WillDecodeInBackground)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e701b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderOpus*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderOpus.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderOpus::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*)>(&::Meta::Voice::Audio::Decoding::AudioDecoderOpus::Decode)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e701c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderOpus*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderOpus.DecodeFrameHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderOpus::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderOpus::DecodeFrameHeader)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x9e702cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderOpus*>(),
                        {"DecodeFrameHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::UnityOpus::Decoder*& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::Meta::Voice::UnityOpus::Decoder* const& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_set__decoder(::Meta::Voice::UnityOpus::Decoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoder = value;
}
constexpr ::ArrayW<uint8_t>& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__frameBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameBuffer;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__frameBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameBuffer;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_set__frameBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameBuffer = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__opusBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opusBuffer;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__opusBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opusBuffer;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_set__opusBuffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____opusBuffer = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__frameLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameLength;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__frameLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameLength;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_set__frameLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameLength = value;
}
constexpr bool& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__validHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validHeader;
}
constexpr bool const& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__validHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validHeader;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_set__validHeader(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____validHeader = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__frameOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameOffset;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__frameOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameOffset;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_set__frameOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameOffset = value;
}
constexpr bool& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__WillDecodeInBackground_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WillDecodeInBackground_k__BackingField;
}
constexpr bool const& Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_get__WillDecodeInBackground_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WillDecodeInBackground_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderOpus::__cordl_internal_set__WillDecodeInBackground_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WillDecodeInBackground_k__BackingField = value;
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderOpus::_ctor(int32_t  channels, int32_t  samplerate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderOpus*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channels, samplerate);
}
inline bool Meta::Voice::Audio::Decoding::AudioDecoderOpus::get_WillDecodeInBackground()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderOpus*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderOpus::Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderOpus*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferOffset, bufferLength, onSamplesDecoded);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderOpus::DecodeFrameHeader(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderOpus*>(),
                        {"DecodeFrameHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferOffset, bufferLength);
}
inline ::Meta::Voice::Audio::Decoding::AudioDecoderOpus* Meta::Voice::Audio::Decoding::AudioDecoderOpus::New_ctor(int32_t  channels, int32_t  samplerate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::Decoding::AudioDecoderOpus*>(channels, samplerate));
}
/// @brief Convert operator to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr  Meta::Voice::Audio::Decoding::AudioDecoderOpus::operator ::Meta::Voice::Audio::Decoding::IAudioDecoder*() noexcept {
return static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* Meta::Voice::Audio::Decoding::AudioDecoderOpus::i___Meta__Voice__Audio__Decoding__IAudioDecoder() noexcept {
return static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderOpus::AudioDecoderOpus()   {
}
