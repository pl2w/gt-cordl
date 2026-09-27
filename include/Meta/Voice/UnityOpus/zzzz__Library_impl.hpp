#pragma once
// IWYU pragma private; include "Meta/Voice/UnityOpus/Library.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/UnityOpus/zzzz__Library_def.hpp"
#include "Meta/Voice/UnityOpus/zzzz__ErrorCode_def.hpp"
#include "Meta/Voice/UnityOpus/zzzz__NumChannels_def.hpp"
#include "Meta/Voice/UnityOpus/zzzz__SamplingFrequency_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Meta::Voice::UnityOpus::Library.OpusDecoderCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Meta::Voice::UnityOpus::SamplingFrequency, ::Meta::Voice::UnityOpus::NumChannels, ::by_ref<::Meta::Voice::UnityOpus::ErrorCode>)>(&::Meta::Voice::UnityOpus::Library::OpusDecoderCreate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e15688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Library*>(),
                        {"OpusDecoderCreate", {}, {::i2c::type_of<::Meta::Voice::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::Meta::Voice::UnityOpus::NumChannels>(), ::i2c::type_of<::by_ref<::Meta::Voice::UnityOpus::ErrorCode>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::UnityOpus::Library.OpusDecodeFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<uint8_t>, int32_t, ::ArrayW<float_t>, int32_t, int32_t)>(&::Meta::Voice::UnityOpus::Library::OpusDecodeFloat)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9e15784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Library*>(),
                        {"OpusDecodeFloat", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::UnityOpus::Library.OpusDecoderDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Meta::Voice::UnityOpus::Library::OpusDecoderDestroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e15928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Library*>(),
                        {"OpusDecoderDestroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::UnityOpus::Library.OpusPcmSoftClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, int32_t, ::Meta::Voice::UnityOpus::NumChannels, ::ArrayW<float_t>)>(&::Meta::Voice::UnityOpus::Library::OpusPcmSoftClip)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e15848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Library*>(),
                        {"OpusPcmSoftClip", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::UnityOpus::NumChannels>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Meta::Voice::UnityOpus::Library::OpusDecoderCreate(::Meta::Voice::UnityOpus::SamplingFrequency  samplingFrequency, ::Meta::Voice::UnityOpus::NumChannels  channels, ::by_ref<::Meta::Voice::UnityOpus::ErrorCode>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Library*>(),
                        {"OpusDecoderCreate", {}, {::i2c::type_of<::Meta::Voice::UnityOpus::SamplingFrequency>(), ::i2c::type_of<::Meta::Voice::UnityOpus::NumChannels>(), ::i2c::type_of<::by_ref<::Meta::Voice::UnityOpus::ErrorCode>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, samplingFrequency, channels, error);
}
inline int32_t Meta::Voice::UnityOpus::Library::OpusDecodeFloat(::System::IntPtr  decoder, ::ArrayW<uint8_t>  data, int32_t  len, ::ArrayW<float_t>  pcm, int32_t  frameSize, int32_t  decodeFec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Library*>(),
                        {"OpusDecodeFloat", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, decoder, data, len, pcm, frameSize, decodeFec);
}
inline void Meta::Voice::UnityOpus::Library::OpusDecoderDestroy(::System::IntPtr  decoder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Library*>(),
                        {"OpusDecoderDestroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, decoder);
}
inline void Meta::Voice::UnityOpus::Library::OpusPcmSoftClip(::ArrayW<float_t>  pcm, int32_t  frameSize, ::Meta::Voice::UnityOpus::NumChannels  channels, ::ArrayW<float_t>  softclipMem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::UnityOpus::Library*>(),
                        {"OpusPcmSoftClip", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::UnityOpus::NumChannels>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pcm, frameSize, channels, softclipMem);
}
// Ctor Parameters []
constexpr ::Meta::Voice::UnityOpus::Library::Library()   {
}
