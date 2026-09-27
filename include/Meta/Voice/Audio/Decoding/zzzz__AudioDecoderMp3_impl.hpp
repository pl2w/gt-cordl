#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderMp3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderMp3_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderMp3Frame_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__IAudioDecoder_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3.get_WillDecodeInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::Decoding::AudioDecoderMp3::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3::get_WillDecodeInBackground)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6e58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3::Decode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e6e594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e6eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*& Meta::Voice::Audio::Decoding::AudioDecoderMp3::__cordl_internal_get__frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frame;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame* const& Meta::Voice::Audio::Decoding::AudioDecoderMp3::__cordl_internal_get__frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frame;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3::__cordl_internal_set__frame(::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frame = value;
}
inline bool Meta::Voice::Audio::Decoding::AudioDecoderMp3::get_WillDecodeInBackground()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3::Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferOffset, bufferLength, onSamplesDecoded);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::Decoding::AudioDecoderMp3* Meta::Voice::Audio::Decoding::AudioDecoderMp3::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::Decoding::AudioDecoderMp3*>());
}
/// @brief Convert operator to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr  Meta::Voice::Audio::Decoding::AudioDecoderMp3::operator ::Meta::Voice::Audio::Decoding::IAudioDecoder*() noexcept {
return static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* Meta::Voice::Audio::Decoding::AudioDecoderMp3::i___Meta__Voice__Audio__Decoding__IAudioDecoder() noexcept {
return static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderMp3::AudioDecoderMp3()   {
}
