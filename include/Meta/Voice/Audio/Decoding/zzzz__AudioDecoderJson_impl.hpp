#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderJson.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderJson_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioJsonDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__IAudioDecoder_def.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunkConverter_def.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunk_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderJson._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderJson::*)(::Meta::Voice::Audio::Decoding::IAudioDecoder*, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*)>(&::Meta::Voice::Audio::Decoding::AudioDecoderJson::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e6e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderJson.get_WillDecodeInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::Decoding::AudioDecoderJson::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderJson::get_WillDecodeInBackground)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6e1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderJson.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderJson::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*)>(&::Meta::Voice::Audio::Decoding::AudioDecoderJson::Decode)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x9e6e1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderJson.DecodeJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderJson::*)(::Meta::Voice::Net::Encoding::Wit::WitChunk)>(&::Meta::Voice::Audio::Decoding::AudioDecoderJson::DecodeJson)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9e6e374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {"DecodeJson", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderJson.DecodeAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderJson::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderJson::DecodeAudio)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e6e4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {"DecodeAudio", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__chunkDecoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chunkDecoder;
}
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter* const& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__chunkDecoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____chunkDecoder;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_set__chunkDecoder(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____chunkDecoder = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__decodedJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decodedJson;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>* const& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__decodedJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decodedJson;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_set__decodedJson(::System::Collections::Generic::List_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decodedJson = value;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__onJsonDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onJsonDecoded;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate* const& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__onJsonDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onJsonDecoded;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_set__onJsonDecoded(::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onJsonDecoded = value;
}
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder*& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__audioDecoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDecoder;
}
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* const& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__audioDecoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDecoder;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_set__audioDecoder(::Meta::Voice::Audio::Decoding::IAudioDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioDecoder = value;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__onSamplesDecoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSamplesDecoded;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate* const& Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_get__onSamplesDecoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSamplesDecoded;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderJson::__cordl_internal_set__onSamplesDecoded(::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSamplesDecoded = value;
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderJson::_ctor(::Meta::Voice::Audio::Decoding::IAudioDecoder*  audioDecoder, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioDecoder, onJsonDecoded);
}
inline bool Meta::Voice::Audio::Decoding::AudioDecoderJson::get_WillDecodeInBackground()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderJson::Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferOffset, bufferLength, onSamplesDecoded);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderJson::DecodeJson(::Meta::Voice::Net::Encoding::Wit::WitChunk  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {"DecodeJson", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderJson::DecodeAudio(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(),
                        {"DecodeAudio", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferOffset, bufferLength);
}
inline ::Meta::Voice::Audio::Decoding::AudioDecoderJson* Meta::Voice::Audio::Decoding::AudioDecoderJson::New_ctor(::Meta::Voice::Audio::Decoding::IAudioDecoder*  audioDecoder, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::Decoding::AudioDecoderJson*>(audioDecoder, onJsonDecoded));
}
/// @brief Convert operator to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr  Meta::Voice::Audio::Decoding::AudioDecoderJson::operator ::Meta::Voice::Audio::Decoding::IAudioDecoder*() noexcept {
return static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* Meta::Voice::Audio::Decoding::AudioDecoderJson::i___Meta__Voice__Audio__Decoding__IAudioDecoder() noexcept {
return static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderJson::AudioDecoderJson()   {
}
