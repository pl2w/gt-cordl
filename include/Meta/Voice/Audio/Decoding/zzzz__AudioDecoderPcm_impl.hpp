#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderPcm.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderPcmType_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderPcm_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderPcmType_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderPcm_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__IAudioDecoder_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderPcm::*)(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e70484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcmType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.get_WillDecodeInBackground
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::Decoding::AudioDecoderPcm::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::get_WillDecodeInBackground)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e7064c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderPcm::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::Decode)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x9e70654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.GetByteCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::GetByteCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e70560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"GetByteCount", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcmType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.GetPcmDecoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate* (*)(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::GetPcmDecoder)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e70580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"GetPcmDecoder", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcmType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.DecodeSample_Pcm16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_Pcm16)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e70924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_Pcm16", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.DecodeSample_Pcm32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_Pcm32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e7094c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_Pcm32", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.DecodeSample_Pcm64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_Pcm64)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e70964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_Pcm64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.DecodeSample_PcmU16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_PcmU16)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e70980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_PcmU16", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.DecodeSample_PcmU32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_PcmU32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9e709a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_PcmU32", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm.DecodeSample_PcmU64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_PcmU64)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e709c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_PcmU64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get_PcmType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PcmType;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcmType const& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get_PcmType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PcmType;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_set_PcmType(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PcmType = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__byteCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteCount;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__byteCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byteCount;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_set__byteCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____byteCount = value;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate* const& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_set__decoder(::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoder = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__overflowOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overflowOffset;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__overflowOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overflowOffset;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_set__overflowOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overflowOffset = value;
}
constexpr ::ArrayW<uint8_t>& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__overflow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overflow;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__overflow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overflow;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_set__overflow(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overflow = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_get__samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samples;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderPcm::__cordl_internal_set__samples(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____samples = value;
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderPcm::_ctor(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  pcmType, int32_t  sampleBufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcmType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pcmType, sampleBufferLength);
}
inline bool Meta::Voice::Audio::Decoding::AudioDecoderPcm::get_WillDecodeInBackground()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"get_WillDecodeInBackground", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderPcm::Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, bufferOffset, bufferLength, onSamplesDecoded);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderPcm::GetByteCount(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  pcmType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"GetByteCount", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcmType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pcmType);
}
inline ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate* Meta::Voice::Audio::Decoding::AudioDecoderPcm::GetPcmDecoder(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  pcmType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"GetPcmDecoder", {}, {::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcmType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*>(nullptr, ___internal_method, pcmType);
}
inline float_t Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_Pcm16(::ArrayW<uint8_t>  rawData, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_Pcm16", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rawData, index);
}
inline float_t Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_Pcm32(::ArrayW<uint8_t>  rawData, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_Pcm32", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rawData, index);
}
inline float_t Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_Pcm64(::ArrayW<uint8_t>  rawData, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_Pcm64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rawData, index);
}
inline float_t Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_PcmU16(::ArrayW<uint8_t>  rawData, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_PcmU16", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rawData, index);
}
inline float_t Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_PcmU32(::ArrayW<uint8_t>  rawData, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_PcmU32", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rawData, index);
}
inline float_t Meta::Voice::Audio::Decoding::AudioDecoderPcm::DecodeSample_PcmU64(::ArrayW<uint8_t>  rawData, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(),
                        {"DecodeSample_PcmU64", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rawData, index);
}
/// @brief [Preserve]
inline ::Meta::Voice::Audio::Decoding::AudioDecoderPcm* Meta::Voice::Audio::Decoding::AudioDecoderPcm::New_ctor(::Meta::Voice::Audio::Decoding::AudioDecoderPcmType  pcmType, int32_t  sampleBufferLength)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::Decoding::AudioDecoderPcm*>(pcmType, sampleBufferLength));
}
/// @brief Convert operator to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr  Meta::Voice::Audio::Decoding::AudioDecoderPcm::operator ::Meta::Voice::Audio::Decoding::IAudioDecoder*() noexcept {
return static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Audio::Decoding::IAudioDecoder"
constexpr ::Meta::Voice::Audio::Decoding::IAudioDecoder* Meta::Voice::Audio::Decoding::AudioDecoderPcm::i___Meta__Voice__Audio__Decoding__IAudioDecoder() noexcept {
return static_cast<::Meta::Voice::Audio::Decoding::IAudioDecoder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcm::AudioDecoderPcm()   {
}
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e70870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate::*)(::ArrayW<uint8_t>, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e709dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline float_t Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate::Invoke(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, buffer, bufferOffset);
}
inline ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate* Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderPcm_PcmDecodeDelegate::AudioDecoderPcm_PcmDecodeDelegate()   {
}
