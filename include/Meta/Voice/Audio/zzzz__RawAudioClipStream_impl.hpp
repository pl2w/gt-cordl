#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/RawAudioClipStream.hpp"
#include "Meta/Voice/Audio/zzzz__BaseAudioClipStream_impl.hpp"
#include "Meta/Voice/Audio/zzzz__RawAudioClipStream_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::RawAudioClipStream.get_SampleBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Meta::Voice::Audio::RawAudioClipStream::*)()>(&::Meta::Voice::Audio::RawAudioClipStream::get_SampleBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6caa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::RawAudioClipStream*>(),
                        {"get_SampleBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::RawAudioClipStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::RawAudioClipStream::*)(int32_t, int32_t, float_t, float_t)>(&::Meta::Voice::Audio::RawAudioClipStream::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e6caa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::RawAudioClipStream*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::RawAudioClipStream.AddSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::RawAudioClipStream::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Meta::Voice::Audio::RawAudioClipStream::AddSamples)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e6cb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::RawAudioClipStream*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::RawAudioClipStream*>(), 26}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Meta::Voice::Audio::RawAudioClipStream::__cordl_internal_get__SampleBuffer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleBuffer_k__BackingField;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::Audio::RawAudioClipStream::__cordl_internal_get__SampleBuffer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleBuffer_k__BackingField;
}
constexpr void Meta::Voice::Audio::RawAudioClipStream::__cordl_internal_set__SampleBuffer_k__BackingField(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleBuffer_k__BackingField = value;
}
inline ::ArrayW<float_t> Meta::Voice::Audio::RawAudioClipStream::get_SampleBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::RawAudioClipStream*>(),
                        {"get_SampleBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void Meta::Voice::Audio::RawAudioClipStream::_ctor(int32_t  newChannels, int32_t  newSampleRate, float_t  newReadyLength, float_t  newMaxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::RawAudioClipStream*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newChannels, newSampleRate, newReadyLength, newMaxLength);
}
inline void Meta::Voice::Audio::RawAudioClipStream::AddSamples(::ArrayW<float_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::RawAudioClipStream*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferOffset, bufferLength);
}
inline ::Meta::Voice::Audio::RawAudioClipStream* Meta::Voice::Audio::RawAudioClipStream::New_ctor(int32_t  newChannels, int32_t  newSampleRate, float_t  newReadyLength, float_t  newMaxLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::RawAudioClipStream*>(newChannels, newSampleRate, newReadyLength, newMaxLength));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::RawAudioClipStream::RawAudioClipStream()   {
}
