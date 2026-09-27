#pragma once
// IWYU pragma private; include "POpusCodec/Wrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "POpusCodec/zzzz__Wrapper_def.hpp"
#include "POpusCodec/Enums/zzzz__Channels_def.hpp"
#include "POpusCodec/Enums/zzzz__OpusApplicationType_def.hpp"
#include "POpusCodec/Enums/zzzz__OpusCtlGetRequest_def.hpp"
#include "POpusCodec/Enums/zzzz__OpusCtlSetRequest_def.hpp"
#include "POpusCodec/Enums/zzzz__OpusStatusCode_def.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_def.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encoder_get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::POpusCodec::Enums::Channels)>(&::POpusCodec::Wrapper::opus_encoder_get_size)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa7437b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_get_size", {}, {::i2c::type_of<::POpusCodec::Enums::Channels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encoder_init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::OpusStatusCode (*)(::System::IntPtr, ::POpusCodec::Enums::SamplingRate, ::POpusCodec::Enums::Channels, ::POpusCodec::Enums::OpusApplicationType)>(&::POpusCodec::Wrapper::opus_encoder_init)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa74382c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_init", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>(), ::i2c::type_of<::POpusCodec::Enums::OpusApplicationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_get_version_string
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::POpusCodec::Wrapper::opus_get_version_string)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7422b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_get_version_string", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<int16_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::POpusCodec::Wrapper::opus_encode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa7438c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encode_float
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::POpusCodec::Wrapper::opus_encode_float)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa743984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encode_float", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encoder_ctl_set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::POpusCodec::Enums::OpusCtlSetRequest, int32_t)>(&::POpusCodec::Wrapper::opus_encoder_ctl_set)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa743a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_ctl_set", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlSetRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encoder_ctl_get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::POpusCodec::Enums::OpusCtlGetRequest, ::by_ref<int32_t>)>(&::POpusCodec::Wrapper::opus_encoder_ctl_get)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa743ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_ctl_get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlGetRequest>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decoder_ctl_set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::POpusCodec::Enums::OpusCtlSetRequest, int32_t)>(&::POpusCodec::Wrapper::opus_decoder_ctl_set)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa743b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_ctl_set", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlSetRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decoder_ctl_get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::POpusCodec::Enums::OpusCtlGetRequest, ::by_ref<int32_t>)>(&::POpusCodec::Wrapper::opus_decoder_ctl_get)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa743bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_ctl_get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlGetRequest>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decoder_get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::POpusCodec::Enums::Channels)>(&::POpusCodec::Wrapper::opus_decoder_get_size)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa743c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_get_size", {}, {::i2c::type_of<::POpusCodec::Enums::Channels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decoder_init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::OpusStatusCode (*)(::System::IntPtr, ::POpusCodec::Enums::SamplingRate, ::POpusCodec::Enums::Channels)>(&::POpusCodec::Wrapper::opus_decoder_init)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa743d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_init", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::ArrayW<int16_t>, int32_t, int32_t)>(&::POpusCodec::Wrapper::opus_decode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa743d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decode_float
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t, ::ArrayW<float_t>, int32_t, int32_t)>(&::POpusCodec::Wrapper::opus_decode_float)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa743e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decode_float", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_packet_get_bandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::POpusCodec::Wrapper::opus_packet_get_bandwidth)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa743f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_packet_get_bandwidth", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_packet_get_nb_channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>)>(&::POpusCodec::Wrapper::opus_packet_get_nb_channels)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa743f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_packet_get_nb_channels", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_strerror
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::POpusCodec::Enums::OpusStatusCode)>(&::POpusCodec::Wrapper::opus_strerror)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa744010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_strerror", {}, {::i2c::type_of<::POpusCodec::Enums::OpusStatusCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encoder_create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::POpusCodec::Enums::SamplingRate, ::POpusCodec::Enums::Channels, ::POpusCodec::Enums::OpusApplicationType)>(&::POpusCodec::Wrapper::opus_encoder_create)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xa742cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_create", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>(), ::i2c::type_of<::POpusCodec::Enums::OpusApplicationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<int16_t>, int32_t, ::ArrayW<uint8_t>)>(&::POpusCodec::Wrapper::opus_encode)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa743494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<uint8_t>)>(&::POpusCodec::Wrapper::opus_encode)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa7431ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_encoder_destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::POpusCodec::Wrapper::opus_encoder_destroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa74369c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.get_opus_encoder_ctl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::POpusCodec::Enums::OpusCtlGetRequest)>(&::POpusCodec::Wrapper::get_opus_encoder_ctl)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa742454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"get_opus_encoder_ctl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlGetRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.set_opus_encoder_ctl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::POpusCodec::Enums::OpusCtlSetRequest, int32_t)>(&::POpusCodec::Wrapper::set_opus_encoder_ctl)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa7425f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"set_opus_encoder_ctl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlSetRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.get_opus_decoder_ctl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::POpusCodec::Enums::OpusCtlGetRequest)>(&::POpusCodec::Wrapper::get_opus_decoder_ctl)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa7441d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"get_opus_decoder_ctl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlGetRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.set_opus_decoder_ctl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::POpusCodec::Enums::OpusCtlSetRequest, int32_t)>(&::POpusCodec::Wrapper::set_opus_decoder_ctl)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa7443c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"set_opus_decoder_ctl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlSetRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decoder_create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::POpusCodec::Enums::SamplingRate, ::POpusCodec::Enums::Channels)>(&::POpusCodec::Wrapper::opus_decoder_create)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xa7445a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_create", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decoder_destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::POpusCodec::Wrapper::opus_decoder_destroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa744864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Photon::Voice::FrameBuffer, ::ArrayW<int16_t>, int32_t, int32_t)>(&::POpusCodec::Wrapper::opus_decode)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa7448bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Photon::Voice::FrameBuffer>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.opus_decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Photon::Voice::FrameBuffer, ::ArrayW<float_t>, int32_t, int32_t)>(&::POpusCodec::Wrapper::opus_decode)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa744c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Photon::Voice::FrameBuffer>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper.HandleStatusCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::POpusCodec::Enums::OpusStatusCode, ::ArrayW<::System::Object*>)>(&::POpusCodec::Wrapper::HandleStatusCode)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa74408c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"HandleStatusCode", {}, {::i2c::type_of<::POpusCodec::Enums::OpusStatusCode>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::Wrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::Wrapper::*)()>(&::POpusCodec::Wrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa744ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t POpusCodec::Wrapper::opus_encoder_get_size(::POpusCodec::Enums::Channels  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_get_size", {}, {::i2c::type_of<::POpusCodec::Enums::Channels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, channels);
}
inline ::POpusCodec::Enums::OpusStatusCode POpusCodec::Wrapper::opus_encoder_init(::System::IntPtr  st, ::POpusCodec::Enums::SamplingRate  Fs, ::POpusCodec::Enums::Channels  channels, ::POpusCodec::Enums::OpusApplicationType  application)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_init", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>(), ::i2c::type_of<::POpusCodec::Enums::OpusApplicationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::OpusStatusCode>(nullptr, ___internal_method, st, Fs, channels, application);
}
inline ::System::IntPtr POpusCodec::Wrapper::opus_get_version_string()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_get_version_string", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t POpusCodec::Wrapper::opus_encode(::System::IntPtr  st, ::ArrayW<int16_t>  pcm, int32_t  frame_size, ::ArrayW<uint8_t>  data, int32_t  max_data_bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, pcm, frame_size, data, max_data_bytes);
}
inline int32_t POpusCodec::Wrapper::opus_encode_float(::System::IntPtr  st, ::ArrayW<float_t>  pcm, int32_t  frame_size, ::ArrayW<uint8_t>  data, int32_t  max_data_bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encode_float", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, pcm, frame_size, data, max_data_bytes);
}
inline int32_t POpusCodec::Wrapper::opus_encoder_ctl_set(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlSetRequest  request, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_ctl_set", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlSetRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request, value);
}
inline int32_t POpusCodec::Wrapper::opus_encoder_ctl_get(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlGetRequest  request, ::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_ctl_get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlGetRequest>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request, value);
}
inline int32_t POpusCodec::Wrapper::opus_decoder_ctl_set(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlSetRequest  request, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_ctl_set", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlSetRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request, value);
}
inline int32_t POpusCodec::Wrapper::opus_decoder_ctl_get(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlGetRequest  request, ::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_ctl_get", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlGetRequest>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request, value);
}
inline int32_t POpusCodec::Wrapper::opus_decoder_get_size(::POpusCodec::Enums::Channels  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_get_size", {}, {::i2c::type_of<::POpusCodec::Enums::Channels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, channels);
}
inline ::POpusCodec::Enums::OpusStatusCode POpusCodec::Wrapper::opus_decoder_init(::System::IntPtr  st, ::POpusCodec::Enums::SamplingRate  Fs, ::POpusCodec::Enums::Channels  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_init", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::OpusStatusCode>(nullptr, ___internal_method, st, Fs, channels);
}
inline int32_t POpusCodec::Wrapper::opus_decode(::System::IntPtr  st, ::System::IntPtr  data, int32_t  len, ::ArrayW<int16_t>  pcm, int32_t  frame_size, int32_t  decode_fec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, data, len, pcm, frame_size, decode_fec);
}
inline int32_t POpusCodec::Wrapper::opus_decode_float(::System::IntPtr  st, ::System::IntPtr  data, int32_t  len, ::ArrayW<float_t>  pcm, int32_t  frame_size, int32_t  decode_fec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decode_float", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, data, len, pcm, frame_size, decode_fec);
}
inline int32_t POpusCodec::Wrapper::opus_packet_get_bandwidth(::System::IntPtr  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_packet_get_bandwidth", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data);
}
inline int32_t POpusCodec::Wrapper::opus_packet_get_nb_channels(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_packet_get_nb_channels", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data);
}
inline ::System::IntPtr POpusCodec::Wrapper::opus_strerror(::POpusCodec::Enums::OpusStatusCode  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_strerror", {}, {::i2c::type_of<::POpusCodec::Enums::OpusStatusCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, error);
}
inline ::System::IntPtr POpusCodec::Wrapper::opus_encoder_create(::POpusCodec::Enums::SamplingRate  Fs, ::POpusCodec::Enums::Channels  channels, ::POpusCodec::Enums::OpusApplicationType  application)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_create", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>(), ::i2c::type_of<::POpusCodec::Enums::OpusApplicationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, Fs, channels, application);
}
inline int32_t POpusCodec::Wrapper::opus_encode(::System::IntPtr  st, ::ArrayW<int16_t>  pcm, int32_t  frame_size, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, pcm, frame_size, data);
}
inline int32_t POpusCodec::Wrapper::opus_encode(::System::IntPtr  st, ::ArrayW<float_t>  pcm, int32_t  frame_size, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, pcm, frame_size, data);
}
inline void POpusCodec::Wrapper::opus_encoder_destroy(::System::IntPtr  st)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_encoder_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, st);
}
inline int32_t POpusCodec::Wrapper::get_opus_encoder_ctl(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlGetRequest  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"get_opus_encoder_ctl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlGetRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request);
}
inline void POpusCodec::Wrapper::set_opus_encoder_ctl(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlSetRequest  request, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"set_opus_encoder_ctl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlSetRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, st, request, value);
}
inline int32_t POpusCodec::Wrapper::get_opus_decoder_ctl(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlGetRequest  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"get_opus_decoder_ctl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlGetRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, request);
}
inline void POpusCodec::Wrapper::set_opus_decoder_ctl(::System::IntPtr  st, ::POpusCodec::Enums::OpusCtlSetRequest  request, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"set_opus_decoder_ctl", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::POpusCodec::Enums::OpusCtlSetRequest>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, st, request, value);
}
inline ::System::IntPtr POpusCodec::Wrapper::opus_decoder_create(::POpusCodec::Enums::SamplingRate  Fs, ::POpusCodec::Enums::Channels  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_create", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, Fs, channels);
}
inline void POpusCodec::Wrapper::opus_decoder_destroy(::System::IntPtr  st)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decoder_destroy", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, st);
}
inline int32_t POpusCodec::Wrapper::opus_decode(::System::IntPtr  st, ::Photon::Voice::FrameBuffer  data, ::ArrayW<int16_t>  pcm, int32_t  decode_fec, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Photon::Voice::FrameBuffer>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, data, pcm, decode_fec, channels);
}
inline int32_t POpusCodec::Wrapper::opus_decode(::System::IntPtr  st, ::Photon::Voice::FrameBuffer  data, ::ArrayW<float_t>  pcm, int32_t  decode_fec, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"opus_decode", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Photon::Voice::FrameBuffer>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, st, data, pcm, decode_fec, channels);
}
inline void POpusCodec::Wrapper::HandleStatusCode(::POpusCodec::Enums::OpusStatusCode  statusCode, /* [ParamArray] */ ::ArrayW<::System::Object*>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {"HandleStatusCode", {}, {::i2c::type_of<::POpusCodec::Enums::OpusStatusCode>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, statusCode, info);
}
inline void POpusCodec::Wrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::Wrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::POpusCodec::Wrapper* POpusCodec::Wrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::POpusCodec::Wrapper*>());
}
// Ctor Parameters []
constexpr ::POpusCodec::Wrapper::Wrapper()   {
}
