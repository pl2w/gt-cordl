#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/IAudioDecoder.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__IAudioDecoder_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::IAudioDecoder.get_WillDecodeInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::Decoding::IAudioDecoder::*)()>(&::Meta::Voice::Audio::Decoding::IAudioDecoder::get_WillDecodeInBackground)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::IAudioDecoder.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::IAudioDecoder::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*)>(&::Meta::Voice::Audio::Decoding::IAudioDecoder::Decode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(), 1}
                ));
    return ___internal_method;
  }
};
inline bool Meta::Voice::Audio::Decoding::IAudioDecoder::get_WillDecodeInBackground()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::IAudioDecoder::Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferOffset, bufferLength, onSamplesDecoded);
}
