#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/EncoderSessionData.hpp"
#include "Liv/Lck/Encoding/zzzz__EncoderSessionData_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Encoding::EncoderSessionData.get_EncodedVideoFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Liv::Lck::Encoding::EncoderSessionData::*)()>(&::Liv::Lck::Encoding::EncoderSessionData::get_EncodedVideoFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"get_EncodedVideoFrames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::EncoderSessionData.set_EncodedVideoFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::EncoderSessionData::*)(uint64_t)>(&::Liv::Lck::Encoding::EncoderSessionData::set_EncodedVideoFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"set_EncodedVideoFrames", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::EncoderSessionData.get_EncodedAudioSamplesPerChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Liv::Lck::Encoding::EncoderSessionData::*)()>(&::Liv::Lck::Encoding::EncoderSessionData::get_EncodedAudioSamplesPerChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"get_EncodedAudioSamplesPerChannel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::EncoderSessionData.set_EncodedAudioSamplesPerChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::EncoderSessionData::*)(uint64_t)>(&::Liv::Lck::Encoding::EncoderSessionData::set_EncodedAudioSamplesPerChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"set_EncodedAudioSamplesPerChannel", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::EncoderSessionData.get_CaptureTimeSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Encoding::EncoderSessionData::*)()>(&::Liv::Lck::Encoding::EncoderSessionData::get_CaptureTimeSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"get_CaptureTimeSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::EncoderSessionData.set_CaptureTimeSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::EncoderSessionData::*)(float_t)>(&::Liv::Lck::Encoding::EncoderSessionData::set_CaptureTimeSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d42d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"set_CaptureTimeSeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint64_t Liv::Lck::Encoding::EncoderSessionData::get_EncodedVideoFrames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"get_EncodedVideoFrames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Liv::Lck::Encoding::EncoderSessionData::set_EncodedVideoFrames(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"set_EncodedVideoFrames", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint64_t Liv::Lck::Encoding::EncoderSessionData::get_EncodedAudioSamplesPerChannel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"get_EncodedAudioSamplesPerChannel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void Liv::Lck::Encoding::EncoderSessionData::set_EncodedAudioSamplesPerChannel(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"set_EncodedAudioSamplesPerChannel", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Liv::Lck::Encoding::EncoderSessionData::get_CaptureTimeSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"get_CaptureTimeSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Liv::Lck::Encoding::EncoderSessionData::set_CaptureTimeSeconds(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::EncoderSessionData>(),
                        {"set_CaptureTimeSeconds", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_EncodedVideoFrames_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EncodedAudioSamplesPerChannel_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CaptureTimeSeconds_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Encoding::EncoderSessionData::EncoderSessionData(uint64_t  _EncodedVideoFrames_k__BackingField, uint64_t  _EncodedAudioSamplesPerChannel_k__BackingField, float_t  _CaptureTimeSeconds_k__BackingField) noexcept  {
this->_EncodedVideoFrames_k__BackingField = _EncodedVideoFrames_k__BackingField;
this->_EncodedAudioSamplesPerChannel_k__BackingField = _EncodedAudioSamplesPerChannel_k__BackingField;
this->_CaptureTimeSeconds_k__BackingField = _CaptureTimeSeconds_k__BackingField;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Encoding::EncoderSessionData::EncoderSessionData()   {
}
