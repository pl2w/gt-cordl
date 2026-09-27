#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderWav.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderPcm_impl.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderWav_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderWav._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderWav::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderWav::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e709f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderWav.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderWav::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*)>(&::Meta::Voice::Audio::Decoding::AudioDecoderWav::Decode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9e70a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderWav.DecodeSubChunkHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderWav::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderWav::DecodeSubChunkHeader)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e70b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(),
                        {"DecodeSubChunkHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_get__subChunkOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subChunkOffset;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_get__subChunkOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subChunkOffset;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_set__subChunkOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subChunkOffset = value;
}
constexpr ::ArrayW<uint8_t>& Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_get__subChunkHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subChunkHeader;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_get__subChunkHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subChunkHeader;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_set__subChunkHeader(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subChunkHeader = value;
}
constexpr bool& Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_get__subChunkIsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subChunkIsData;
}
constexpr bool const& Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_get__subChunkIsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subChunkIsData;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_set__subChunkIsData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subChunkIsData = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_get__subChunkLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subChunkLength;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_get__subChunkLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subChunkLength;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderWav::__cordl_internal_set__subChunkLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subChunkLength = value;
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderWav::setStaticF_DataDescriptor(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "DataDescriptor", ::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Meta::Voice::Audio::Decoding::AudioDecoderWav::getStaticF_DataDescriptor()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "DataDescriptor", ::Meta::Voice::Audio::Decoding::AudioDecoderWav*>();
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderWav::_ctor(int32_t  sampleBufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleBufferLength);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderWav::Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferOffset, bufferLength, onSamplesDecoded);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderWav::DecodeSubChunkHeader(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(),
                        {"DecodeSubChunkHeader", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferOffset, bufferLength);
}
template<typename T>
inline bool Meta::Voice::Audio::Decoding::AudioDecoderWav::SubArrayEquals(::ArrayW<T>  array1, int32_t  offset1, ::ArrayW<T>  array2, int32_t  offset2, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(),
                    {"SubArrayEquals", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array1, offset1, array2, offset2, length);
}
/// @brief [Preserve]
inline ::Meta::Voice::Audio::Decoding::AudioDecoderWav* Meta::Voice::Audio::Decoding::AudioDecoderWav::New_ctor(int32_t  sampleBufferLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::Decoding::AudioDecoderWav*>(sampleBufferLength));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderWav::AudioDecoderWav()   {
}
