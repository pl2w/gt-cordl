#pragma once
// IWYU pragma private; include "POpusCodec/OpusEncoder.hpp"
#include "POpusCodec/Enums/zzzz__Channels_impl.hpp"
#include "POpusCodec/Enums/zzzz__Delay_impl.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_impl.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "POpusCodec/zzzz__OpusEncoder_def.hpp"
#include "POpusCodec/Enums/zzzz__Bandwidth_def.hpp"
#include "POpusCodec/Enums/zzzz__Channels_def.hpp"
#include "POpusCodec/Enums/zzzz__Complexity_def.hpp"
#include "POpusCodec/Enums/zzzz__Delay_def.hpp"
#include "POpusCodec/Enums/zzzz__ForceChannels_def.hpp"
#include "POpusCodec/Enums/zzzz__OpusApplicationType_def.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_def.hpp"
#include "POpusCodec/Enums/zzzz__SignalHint_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_InputSamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::SamplingRate (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_InputSamplingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa742314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_InputSamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_InputChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::Channels (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_InputChannels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74231c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_InputChannels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_EncoderDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(::POpusCodec::Enums::Delay)>(&::POpusCodec::OpusEncoder::set_EncoderDelay)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa742324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_EncoderDelay", {}, {::i2c::type_of<::POpusCodec::Enums::Delay>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_EncoderDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::Delay (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_EncoderDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa742438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_EncoderDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_FrameSizePerChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_FrameSizePerChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa742440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_FrameSizePerChannel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_Bitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_Bitrate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa742448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_Bitrate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_Bitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(int32_t)>(&::POpusCodec::OpusEncoder::set_Bitrate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7425e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_Bitrate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_MaxBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::Bandwidth (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_MaxBandwidth)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa7427d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_MaxBandwidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_MaxBandwidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(::POpusCodec::Enums::Bandwidth)>(&::POpusCodec::OpusEncoder::set_MaxBandwidth)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7427e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_MaxBandwidth", {}, {::i2c::type_of<::POpusCodec::Enums::Bandwidth>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_Complexity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::Complexity (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_Complexity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa7427f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_Complexity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_Complexity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(::POpusCodec::Enums::Complexity)>(&::POpusCodec::OpusEncoder::set_Complexity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7427fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_Complexity", {}, {::i2c::type_of<::POpusCodec::Enums::Complexity>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_ExpectedPacketLossPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_ExpectedPacketLossPercentage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa74280c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_ExpectedPacketLossPercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_ExpectedPacketLossPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(int32_t)>(&::POpusCodec::OpusEncoder::set_ExpectedPacketLossPercentage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa742818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_ExpectedPacketLossPercentage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_SignalHint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::SignalHint (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_SignalHint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa742828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_SignalHint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_SignalHint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(::POpusCodec::Enums::SignalHint)>(&::POpusCodec::OpusEncoder::set_SignalHint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa742834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_SignalHint", {}, {::i2c::type_of<::POpusCodec::Enums::SignalHint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_ForceChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::ForceChannels (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_ForceChannels)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa742844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_ForceChannels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_ForceChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(::POpusCodec::Enums::ForceChannels)>(&::POpusCodec::OpusEncoder::set_ForceChannels)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa742850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_ForceChannels", {}, {::i2c::type_of<::POpusCodec::Enums::ForceChannels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_UseInbandFEC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_UseInbandFEC)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa742860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_UseInbandFEC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_UseInbandFEC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(bool)>(&::POpusCodec::OpusEncoder::set_UseInbandFEC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa742880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_UseInbandFEC", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_PacketLossPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_PacketLossPercentage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa742890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_PacketLossPercentage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_PacketLossPercentage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(int32_t)>(&::POpusCodec::OpusEncoder::set_PacketLossPercentage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa74289c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_PacketLossPercentage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_UseUnconstrainedVBR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_UseUnconstrainedVBR)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa7428ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_UseUnconstrainedVBR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_UseUnconstrainedVBR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(bool)>(&::POpusCodec::OpusEncoder::set_UseUnconstrainedVBR)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7428cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_UseUnconstrainedVBR", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.get_DtxEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::get_DtxEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa7428e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_DtxEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.set_DtxEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(bool)>(&::POpusCodec::OpusEncoder::set_DtxEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa742900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_DtxEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)(::POpusCodec::Enums::SamplingRate, ::POpusCodec::Enums::Channels, int32_t, ::POpusCodec::Enums::OpusApplicationType, ::POpusCodec::Enums::Delay)>(&::POpusCodec::OpusEncoder::_ctor)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xa742910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::POpusCodec::Enums::OpusApplicationType>(), ::i2c::type_of<::POpusCodec::Enums::Delay>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::POpusCodec::OpusEncoder::*)(::ArrayW<float_t>)>(&::POpusCodec::OpusEncoder::Encode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa74312c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"Encode", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::POpusCodec::OpusEncoder::*)(::ArrayW<int16_t>)>(&::POpusCodec::OpusEncoder::Encode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa7433d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"Encode", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::POpusCodec::OpusEncoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::POpusCodec::OpusEncoder::*)()>(&::POpusCodec::OpusEncoder::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa74367c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& POpusCodec::OpusEncoder::__cordl_internal_get__handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr ::System::IntPtr const& POpusCodec::OpusEncoder::__cordl_internal_get__handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr void POpusCodec::OpusEncoder::__cordl_internal_set__handle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handle = value;
}
constexpr int32_t& POpusCodec::OpusEncoder::__cordl_internal_get__frameSizePerChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSizePerChannel;
}
constexpr int32_t const& POpusCodec::OpusEncoder::__cordl_internal_get__frameSizePerChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSizePerChannel;
}
constexpr void POpusCodec::OpusEncoder::__cordl_internal_set__frameSizePerChannel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameSizePerChannel = value;
}
constexpr ::POpusCodec::Enums::SamplingRate& POpusCodec::OpusEncoder::__cordl_internal_get__inputSamplingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSamplingRate;
}
constexpr ::POpusCodec::Enums::SamplingRate const& POpusCodec::OpusEncoder::__cordl_internal_get__inputSamplingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputSamplingRate;
}
constexpr void POpusCodec::OpusEncoder::__cordl_internal_set__inputSamplingRate(::POpusCodec::Enums::SamplingRate  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputSamplingRate = value;
}
constexpr ::POpusCodec::Enums::Channels& POpusCodec::OpusEncoder::__cordl_internal_get__inputChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputChannels;
}
constexpr ::POpusCodec::Enums::Channels const& POpusCodec::OpusEncoder::__cordl_internal_get__inputChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputChannels;
}
constexpr void POpusCodec::OpusEncoder::__cordl_internal_set__inputChannels(::POpusCodec::Enums::Channels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputChannels = value;
}
constexpr ::ArrayW<uint8_t>& POpusCodec::OpusEncoder::__cordl_internal_get_writePacket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writePacket;
}
constexpr ::ArrayW<uint8_t> const& POpusCodec::OpusEncoder::__cordl_internal_get_writePacket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writePacket;
}
constexpr void POpusCodec::OpusEncoder::__cordl_internal_set_writePacket(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writePacket = value;
}
constexpr ::POpusCodec::Enums::Delay& POpusCodec::OpusEncoder::__cordl_internal_get__encoderDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderDelay;
}
constexpr ::POpusCodec::Enums::Delay const& POpusCodec::OpusEncoder::__cordl_internal_get__encoderDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderDelay;
}
constexpr void POpusCodec::OpusEncoder::__cordl_internal_set__encoderDelay(::POpusCodec::Enums::Delay  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoderDelay = value;
}
inline void POpusCodec::OpusEncoder::setStaticF_EmptyBuffer(::System::ArraySegment_1<uint8_t>  value)  {
::cordl_internals::setStaticField<::System::ArraySegment_1<uint8_t>, "EmptyBuffer", ::POpusCodec::OpusEncoder*>(std::forward<::System::ArraySegment_1<uint8_t>>(value));
}
inline ::System::ArraySegment_1<uint8_t> POpusCodec::OpusEncoder::getStaticF_EmptyBuffer()  {
return ::cordl_internals::getStaticField<::System::ArraySegment_1<uint8_t>, "EmptyBuffer", ::POpusCodec::OpusEncoder*>();
}
inline ::POpusCodec::Enums::SamplingRate POpusCodec::OpusEncoder::get_InputSamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_InputSamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::SamplingRate>(this, ___internal_method);
}
inline ::POpusCodec::Enums::Channels POpusCodec::OpusEncoder::get_InputChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_InputChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::Channels>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_EncoderDelay(::POpusCodec::Enums::Delay  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_EncoderDelay", {}, {::i2c::type_of<::POpusCodec::Enums::Delay>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::POpusCodec::Enums::Delay POpusCodec::OpusEncoder::get_EncoderDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_EncoderDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::Delay>(this, ___internal_method);
}
inline int32_t POpusCodec::OpusEncoder::get_FrameSizePerChannel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_FrameSizePerChannel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t POpusCodec::OpusEncoder::get_Bitrate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_Bitrate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_Bitrate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_Bitrate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::POpusCodec::Enums::Bandwidth POpusCodec::OpusEncoder::get_MaxBandwidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_MaxBandwidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::Bandwidth>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_MaxBandwidth(::POpusCodec::Enums::Bandwidth  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_MaxBandwidth", {}, {::i2c::type_of<::POpusCodec::Enums::Bandwidth>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::POpusCodec::Enums::Complexity POpusCodec::OpusEncoder::get_Complexity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_Complexity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::Complexity>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_Complexity(::POpusCodec::Enums::Complexity  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_Complexity", {}, {::i2c::type_of<::POpusCodec::Enums::Complexity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t POpusCodec::OpusEncoder::get_ExpectedPacketLossPercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_ExpectedPacketLossPercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_ExpectedPacketLossPercentage(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_ExpectedPacketLossPercentage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::POpusCodec::Enums::SignalHint POpusCodec::OpusEncoder::get_SignalHint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_SignalHint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::SignalHint>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_SignalHint(::POpusCodec::Enums::SignalHint  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_SignalHint", {}, {::i2c::type_of<::POpusCodec::Enums::SignalHint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::POpusCodec::Enums::ForceChannels POpusCodec::OpusEncoder::get_ForceChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_ForceChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::ForceChannels>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_ForceChannels(::POpusCodec::Enums::ForceChannels  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_ForceChannels", {}, {::i2c::type_of<::POpusCodec::Enums::ForceChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool POpusCodec::OpusEncoder::get_UseInbandFEC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_UseInbandFEC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_UseInbandFEC(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_UseInbandFEC", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t POpusCodec::OpusEncoder::get_PacketLossPercentage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_PacketLossPercentage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_PacketLossPercentage(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_PacketLossPercentage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool POpusCodec::OpusEncoder::get_UseUnconstrainedVBR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_UseUnconstrainedVBR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_UseUnconstrainedVBR(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_UseUnconstrainedVBR", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool POpusCodec::OpusEncoder::get_DtxEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"get_DtxEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void POpusCodec::OpusEncoder::set_DtxEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"set_DtxEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void POpusCodec::OpusEncoder::_ctor(::POpusCodec::Enums::SamplingRate  inputSamplingRateHz, ::POpusCodec::Enums::Channels  numChannels, int32_t  bitrate, ::POpusCodec::Enums::OpusApplicationType  applicationType, ::POpusCodec::Enums::Delay  encoderDelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<::POpusCodec::Enums::Channels>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::POpusCodec::Enums::OpusApplicationType>(), ::i2c::type_of<::POpusCodec::Enums::Delay>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputSamplingRateHz, numChannels, bitrate, applicationType, encoderDelay);
}
inline ::System::ArraySegment_1<uint8_t> POpusCodec::OpusEncoder::Encode(::ArrayW<float_t>  pcmSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"Encode", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, pcmSamples);
}
inline ::System::ArraySegment_1<uint8_t> POpusCodec::OpusEncoder::Encode(::ArrayW<int16_t>  pcmSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"Encode", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, pcmSamples);
}
inline void POpusCodec::OpusEncoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::POpusCodec::OpusEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::POpusCodec::OpusEncoder* POpusCodec::OpusEncoder::New_ctor(::POpusCodec::Enums::SamplingRate  inputSamplingRateHz, ::POpusCodec::Enums::Channels  numChannels, int32_t  bitrate, ::POpusCodec::Enums::OpusApplicationType  applicationType, ::POpusCodec::Enums::Delay  encoderDelay)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::POpusCodec::OpusEncoder*>(inputSamplingRateHz, numChannels, bitrate, applicationType, encoderDelay));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  POpusCodec::OpusEncoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* POpusCodec::OpusEncoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::POpusCodec::OpusEncoder::OpusEncoder()   {
}
