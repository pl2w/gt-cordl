#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/Decoding/AudioDecoderMp3Frame.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegChannelMode_impl.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegLayer_impl.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegVersion_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioDecoderMp3Frame_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/NLayer/zzzz__IMpegFrame_def.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegChannelMode_def.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegFrameDecoder_def.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegLayer_def.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegVersion_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6eec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_IsHeaderDecoded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_IsHeaderDecoded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e6eed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_IsHeaderDecoded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::Clear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e6eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::Reset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e6ef08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::Decode)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x9e6e5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::MpegVersion (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(::Meta::Voice::NLayer::MpegVersion)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_Version", {}, {::i2c::type_of<::Meta::Voice::NLayer::MpegVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::MpegLayer (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_Layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(::Meta::Voice::NLayer::MpegLayer)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_Layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_Layer", {}, {::i2c::type_of<::Meta::Voice::NLayer::MpegLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_ChannelMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::MpegChannelMode (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_ChannelMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_ChannelMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_ChannelMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(::Meta::Voice::NLayer::MpegChannelMode)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_ChannelMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_ChannelMode", {}, {::i2c::type_of<::Meta::Voice::NLayer::MpegChannelMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_ChannelModeExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_ChannelModeExtension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_ChannelModeExtension", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_ChannelModeExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_ChannelModeExtension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_ChannelModeExtension", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_BitRateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_BitRateIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_BitRateIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_BitRateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_BitRateIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_BitRateIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_BitRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_BitRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_BitRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_BitRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_BitRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_BitRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_SampleRateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_SampleRateIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_SampleRateIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_SampleRateIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_SampleRateIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_SampleRateIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_SampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_SampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_SampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_SampleRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_IsCopyrighted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_IsCopyrighted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_IsCopyrighted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_IsCopyrighted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(bool)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_IsCopyrighted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_IsCopyrighted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_HasCrc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_HasCrc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_HasCrc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_HasCrc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(bool)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_HasCrc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_HasCrc", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_IsCorrupted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_IsCorrupted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_IsCorrupted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_IsCorrupted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(bool)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_IsCorrupted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_IsCorrupted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_FrameLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_FrameLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_FrameLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_FrameLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_FrameLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_FrameLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.get_SampleCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_SampleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_SampleCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.set_SampleCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_SampleCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e6f454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_SampleCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.DecodeHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::DecodeHeader)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x9e6ef38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"DecodeHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.GetMpegVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::MpegVersion (*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::GetMpegVersion)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e6f598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"GetMpegVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.GetMpegLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::MpegLayer (*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::GetMpegLayer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e6f670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"GetMpegLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.BitRShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::BitRShift)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e6f45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"BitRShift", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.GetSideDataSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::GetSideDataSize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e6f73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"GetSideDataSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.ReadBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::ReadBits)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e6f7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"ReadBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::ReadByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e6f8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"ReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::ToString)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x9e6f914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                    {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame.GetBitString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::GetBitString)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9e6f484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"GetBitString", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::*)()>(&::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9e6ed08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__dataBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataBuffer;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__dataBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataBuffer;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__dataBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataBuffer = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__dataOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataOffset;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__dataOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataOffset;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__dataOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataOffset = value;
}
constexpr ::ArrayW<float_t>& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__sampleBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleBuffer;
}
constexpr ::ArrayW<float_t> const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__sampleBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleBuffer;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__sampleBuffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleBuffer = value;
}
constexpr ::Meta::Voice::NLayer::MpegFrameDecoder*& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::Meta::Voice::NLayer::MpegFrameDecoder* const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__decoder(::Meta::Voice::NLayer::MpegFrameDecoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoder = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__readOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOffset;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__readOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readOffset;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__readOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readOffset = value;
}
constexpr uint64_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__bitBucket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitBucket;
}
constexpr uint64_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__bitBucket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitBucket;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__bitBucket(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bitBucket = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__bitsRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitsRead;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__bitsRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitsRead;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__bitsRead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bitsRead = value;
}
constexpr uint32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__frameIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameIndex;
}
constexpr uint32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__frameIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameIndex;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__frameIndex(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameIndex = value;
}
constexpr ::Meta::Voice::NLayer::MpegVersion& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__Version_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version_k__BackingField;
}
constexpr ::Meta::Voice::NLayer::MpegVersion const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__Version_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__Version_k__BackingField(::Meta::Voice::NLayer::MpegVersion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Version_k__BackingField = value;
}
constexpr ::Meta::Voice::NLayer::MpegLayer& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__Layer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer_k__BackingField;
}
constexpr ::Meta::Voice::NLayer::MpegLayer const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__Layer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__Layer_k__BackingField(::Meta::Voice::NLayer::MpegLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer_k__BackingField = value;
}
constexpr ::Meta::Voice::NLayer::MpegChannelMode& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__ChannelMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelMode_k__BackingField;
}
constexpr ::Meta::Voice::NLayer::MpegChannelMode const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__ChannelMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelMode_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__ChannelMode_k__BackingField(::Meta::Voice::NLayer::MpegChannelMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChannelMode_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__ChannelModeExtension_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelModeExtension_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__ChannelModeExtension_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ChannelModeExtension_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__ChannelModeExtension_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ChannelModeExtension_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__BitRateIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BitRateIndex_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__BitRateIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BitRateIndex_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__BitRateIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BitRateIndex_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__BitRate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BitRate_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__BitRate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BitRate_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__BitRate_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BitRate_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__SampleRateIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleRateIndex_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__SampleRateIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleRateIndex_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__SampleRateIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleRateIndex_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__SampleRate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleRate_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__SampleRate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleRate_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__SampleRate_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleRate_k__BackingField = value;
}
constexpr bool& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__IsCopyrighted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCopyrighted_k__BackingField;
}
constexpr bool const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__IsCopyrighted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCopyrighted_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__IsCopyrighted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsCopyrighted_k__BackingField = value;
}
constexpr bool& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__HasCrc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasCrc_k__BackingField;
}
constexpr bool const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__HasCrc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasCrc_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__HasCrc_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasCrc_k__BackingField = value;
}
constexpr bool& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__IsCorrupted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCorrupted_k__BackingField;
}
constexpr bool const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__IsCorrupted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsCorrupted_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__IsCorrupted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsCorrupted_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__FrameLength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrameLength_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__FrameLength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FrameLength_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__FrameLength_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FrameLength_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__SampleCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleCount_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_get__SampleCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleCount_k__BackingField;
}
constexpr void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::__cordl_internal_set__SampleCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleCount_k__BackingField = value;
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::setStaticF__bitRateTable(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::ArrayW<int32_t>>>, "_bitRateTable", ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(std::forward<::ArrayW<::ArrayW<::ArrayW<int32_t>>>>(value));
}
inline ::ArrayW<::ArrayW<::ArrayW<int32_t>>> Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::getStaticF__bitRateTable()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::ArrayW<int32_t>>>, "_bitRateTable", ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>();
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline bool Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_IsHeaderDecoded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_IsHeaderDecoded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::Decode(::ArrayW<uint8_t>  buffer, int32_t  bufferOffset, int32_t  bufferLength, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"Decode", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, bufferOffset, bufferLength, onSamplesDecoded);
}
inline ::Meta::Voice::NLayer::MpegVersion Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::MpegVersion>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_Version(::Meta::Voice::NLayer::MpegVersion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_Version", {}, {::i2c::type_of<::Meta::Voice::NLayer::MpegVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::NLayer::MpegLayer Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::MpegLayer>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_Layer(::Meta::Voice::NLayer::MpegLayer  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_Layer", {}, {::i2c::type_of<::Meta::Voice::NLayer::MpegLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::NLayer::MpegChannelMode Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_ChannelMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_ChannelMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::MpegChannelMode>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_ChannelMode(::Meta::Voice::NLayer::MpegChannelMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_ChannelMode", {}, {::i2c::type_of<::Meta::Voice::NLayer::MpegChannelMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_ChannelModeExtension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_ChannelModeExtension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_ChannelModeExtension(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_ChannelModeExtension", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_BitRateIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_BitRateIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_BitRateIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_BitRateIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_BitRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_BitRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_BitRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_BitRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_SampleRateIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_SampleRateIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_SampleRateIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_SampleRateIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_SampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_SampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_SampleRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_SampleRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_IsCopyrighted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_IsCopyrighted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_IsCopyrighted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_IsCopyrighted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_HasCrc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_HasCrc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_HasCrc(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_HasCrc", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_IsCorrupted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_IsCorrupted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_IsCorrupted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_IsCorrupted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_FrameLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_FrameLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_FrameLength(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_FrameLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::get_SampleCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"get_SampleCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::set_SampleCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"set_SampleCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::Reverse(::ArrayW<T>  array, int32_t  start, int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                    {"Reverse", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, start, length);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::DecodeHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"DecodeHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::NLayer::MpegVersion Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::GetMpegVersion(int32_t  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"GetMpegVersion", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::MpegVersion>(nullptr, ___internal_method, header);
}
inline ::Meta::Voice::NLayer::MpegLayer Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::GetMpegLayer(int32_t  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"GetMpegLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::MpegLayer>(nullptr, ___internal_method, header);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::BitRShift(int32_t  number, int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"BitRShift", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, number, bits);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::GetSideDataSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"GetSideDataSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::ReadBits(int32_t  bitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"ReadBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bitCount);
}
inline int32_t Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::ReadByte(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"ReadByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset);
}
inline ::StringW Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::GetBitString(int32_t  headerData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {"GetBitString", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, headerData);
}
inline void Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame* Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame*>());
}
/// @brief Convert operator to "::Meta::Voice::NLayer::IMpegFrame"
constexpr  Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::operator ::Meta::Voice::NLayer::IMpegFrame*() noexcept {
return static_cast<::Meta::Voice::NLayer::IMpegFrame*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::NLayer::IMpegFrame"
constexpr ::Meta::Voice::NLayer::IMpegFrame* Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::i___Meta__Voice__NLayer__IMpegFrame() noexcept {
return static_cast<::Meta::Voice::NLayer::IMpegFrame*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::Decoding::AudioDecoderMp3Frame::AudioDecoderMp3Frame()   {
}
