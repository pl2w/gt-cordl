#pragma once
// IWYU pragma private; include "Photon/Voice/VoiceInfo.hpp"
#include "Photon/Voice/zzzz__Codec_impl.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_def.hpp"
#include "Photon/Voice/zzzz__Codec_def.hpp"
#include "Photon/Voice/zzzz__OpusCodec_FrameDuration_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.CreateAudioOpus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::VoiceInfo (*)(::POpusCodec::Enums::SamplingRate, int32_t, ::GlobalNamespace::OpusCodec_FrameDuration, int32_t, ::System::Object*)>(&::Photon::Voice::VoiceInfo::CreateAudioOpus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa753eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"CreateAudioOpus", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OpusCodec_FrameDuration>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.CreateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::VoiceInfo (*)(::Photon::Voice::Codec, int32_t, int32_t, int32_t, ::System::Object*)>(&::Photon::Voice::VoiceInfo::CreateAudio)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa753f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"CreateAudio", {}, {::i2c::type_of<::Photon::Voice::Codec>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::ToString)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0xa74e2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                    {::i2c::class_of<::Photon::Voice::VoiceInfo>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_Codec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Codec (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_Codec)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Codec", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_Codec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(::Photon::Voice::Codec)>(&::Photon::Voice::VoiceInfo::set_Codec)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Codec", {}, {::i2c::type_of<::Photon::Voice::Codec>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_SamplingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_SamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(int32_t)>(&::Photon::Voice::VoiceInfo::set_SamplingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_SamplingRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Channels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(int32_t)>(&::Photon::Voice::VoiceInfo::set_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Channels", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_FrameDurationUs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_FrameDurationUs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_FrameDurationUs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_FrameDurationUs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(int32_t)>(&::Photon::Voice::VoiceInfo::set_FrameDurationUs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa754004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_FrameDurationUs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_Bitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_Bitrate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75400c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Bitrate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_Bitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(int32_t)>(&::Photon::Voice::VoiceInfo::set_Bitrate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa754014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Bitrate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(int32_t)>(&::Photon::Voice::VoiceInfo::set_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa754024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Width", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75402c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(int32_t)>(&::Photon::Voice::VoiceInfo::set_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa754034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Height", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_FPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_FPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75403c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_FPS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_FPS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(int32_t)>(&::Photon::Voice::VoiceInfo::set_FPS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa754044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_FPS", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_KeyFrameInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_KeyFrameInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75404c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_KeyFrameInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_KeyFrameInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(int32_t)>(&::Photon::Voice::VoiceInfo::set_KeyFrameInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa754054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_KeyFrameInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_UserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_UserData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa75405c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_UserData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.set_UserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceInfo::*)(::System::Object*)>(&::Photon::Voice::VoiceInfo::set_UserData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa754064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_UserData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_FrameDurationSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_FrameDurationSamples)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa75406c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_FrameDurationSamples", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceInfo.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceInfo::*)()>(&::Photon::Voice::VoiceInfo::get_FrameSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa753f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_FrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Photon::Voice::VoiceInfo Photon::Voice::VoiceInfo::CreateAudioOpus(::POpusCodec::Enums::SamplingRate  samplingRate, int32_t  channels, ::GlobalNamespace::OpusCodec_FrameDuration  frameDurationUs, int32_t  bitrate, ::System::Object*  userdata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"CreateAudioOpus", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OpusCodec_FrameDuration>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::VoiceInfo>(nullptr, ___internal_method, samplingRate, channels, frameDurationUs, bitrate, userdata);
}
inline ::Photon::Voice::VoiceInfo Photon::Voice::VoiceInfo::CreateAudio(::Photon::Voice::Codec  codec, int32_t  samplingRate, int32_t  channels, int32_t  frameDurationUs, ::System::Object*  userdata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"CreateAudio", {}, {::i2c::type_of<::Photon::Voice::Codec>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::VoiceInfo>(nullptr, ___internal_method, codec, samplingRate, channels, frameDurationUs, userdata);
}
inline ::StringW Photon::Voice::VoiceInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::VoiceInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Photon::Voice::Codec Photon::Voice::VoiceInfo::get_Codec()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Codec", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Codec>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_Codec(::Photon::Voice::Codec  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Codec", {}, {::i2c::type_of<::Photon::Voice::Codec>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceInfo::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_SamplingRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_SamplingRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceInfo::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_Channels(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Channels", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceInfo::get_FrameDurationUs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_FrameDurationUs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_FrameDurationUs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_FrameDurationUs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceInfo::get_Bitrate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Bitrate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_Bitrate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Bitrate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceInfo::get_Width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_Width(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Width", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceInfo::get_Height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_Height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_Height(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_Height", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceInfo::get_FPS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_FPS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_FPS(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_FPS", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceInfo::get_KeyFrameInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_KeyFrameInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_KeyFrameInt(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_KeyFrameInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Object* Photon::Voice::VoiceInfo::get_UserData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_UserData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Photon::Voice::VoiceInfo::set_UserData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"set_UserData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceInfo::get_FrameDurationSamples()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_FrameDurationSamples", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Photon::Voice::VoiceInfo::get_FrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceInfo>(),
                        {"get_FrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_Codec_k__BackingField", ty: "::Photon::Voice::Codec", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SamplingRate_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Channels_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_FrameDurationUs_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Bitrate_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_FPS_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_KeyFrameInt_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UserData_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::VoiceInfo::VoiceInfo(::Photon::Voice::Codec  _Codec_k__BackingField, int32_t  _SamplingRate_k__BackingField, int32_t  _Channels_k__BackingField, int32_t  _FrameDurationUs_k__BackingField, int32_t  _Bitrate_k__BackingField, int32_t  _Width_k__BackingField, int32_t  _Height_k__BackingField, int32_t  _FPS_k__BackingField, int32_t  _KeyFrameInt_k__BackingField, ::System::Object*  _UserData_k__BackingField) noexcept  {
this->_Codec_k__BackingField = _Codec_k__BackingField;
this->_SamplingRate_k__BackingField = _SamplingRate_k__BackingField;
this->_Channels_k__BackingField = _Channels_k__BackingField;
this->_FrameDurationUs_k__BackingField = _FrameDurationUs_k__BackingField;
this->_Bitrate_k__BackingField = _Bitrate_k__BackingField;
this->_Width_k__BackingField = _Width_k__BackingField;
this->_Height_k__BackingField = _Height_k__BackingField;
this->_FPS_k__BackingField = _FPS_k__BackingField;
this->_KeyFrameInt_k__BackingField = _KeyFrameInt_k__BackingField;
this->_UserData_k__BackingField = _UserData_k__BackingField;
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceInfo::VoiceInfo()   {
}
