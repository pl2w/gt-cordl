#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/WebRtcAudioDsp.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "Photon/Voice/Unity/zzzz__WebRtcAudioDsp_def.hpp"
#include "Photon/Voice/Unity/zzzz__AudioOutCapture_def.hpp"
#include "Photon/Voice/Unity/zzzz__PhotonVoiceCreatedParams_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Photon/Voice/zzzz__LocalVoiceAudioShort_def.hpp"
#include "Photon/Voice/zzzz__WebRTCAudioProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_AEC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_AEC)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa7838e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AEC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_AEC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_AEC)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa783a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AEC", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_AECMobile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_AECMobile)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa783de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AECMobile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_AECMobile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_AECMobile)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa783dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AECMobile", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_AecHighPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_AecHighPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa783df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AecHighPass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_AecHighPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_AecHighPass)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa783df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AecHighPass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_ReverseStreamDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_ReverseStreamDelayMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa783ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_ReverseStreamDelayMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_ReverseStreamDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(int32_t)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_ReverseStreamDelayMs)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa783ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_ReverseStreamDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_NoiseSuppression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_NoiseSuppression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa783fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_NoiseSuppression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_NoiseSuppression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_NoiseSuppression)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa783fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_NoiseSuppression", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_HighPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_HighPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7840a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_HighPass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_HighPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_HighPass)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa7840ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_HighPass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_Bypass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78418c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_Bypass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_Bypass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_Bypass)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa784194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_AGC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_AGC)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7841c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AGC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_AGC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_AGC)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa7841cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AGC", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_AgcCompressionGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_AgcCompressionGain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7842ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AgcCompressionGain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_AgcCompressionGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(int32_t)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_AgcCompressionGain)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa7842b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AgcCompressionGain", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_VAD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_VAD)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa784494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_VAD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_VAD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_VAD)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa78449c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_VAD", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_IsInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa783a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.get_AecOnlyWhenEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::get_AecOnlyWhenEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa78457c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AecOnlyWhenEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.set_AecOnlyWhenEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::set_AecOnlyWhenEnabled)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa784584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AecOnlyWhenEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::Awake)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa784654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::OnEnable)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa784868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::OnDisable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa784a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.SupportedPlatformCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::SupportedPlatformCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa784860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SupportedPlatformCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.ToggleAec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::ToggleAec)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa783af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"ToggleAec", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.ToggleAecOutputListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::ToggleAecOutputListener)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0xa784b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"ToggleAecOutputListener", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.StartAec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::StartAec)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa7859a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"StartAec", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.OnAudioConfigurationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::OnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0xa785ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnAudioConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.OnAudioOutFrameFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(::ArrayW<float_t>, int32_t)>(&::Photon::Voice::Unity::WebRtcAudioDsp::OnAudioOutFrameFloat)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0xa786904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnAudioOutFrameFloat", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.PhotonVoiceCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)(::Photon::Voice::Unity::PhotonVoiceCreatedParams*)>(&::Photon::Voice::Unity::WebRtcAudioDsp::PhotonVoiceCreated)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0xa786d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"PhotonVoiceCreated", {}, {::i2c::type_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.PhotonVoiceRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::PhotonVoiceRemoved)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa787650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"PhotonVoiceRemoved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::OnDestroy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa787754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.StopAllProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::StopAllProcessing)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa787654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"StopAllProcessing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::Restart)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0xa786388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"Restart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::Init)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xa78734c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.SetOrSwitchAudioListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)(::UnityEngine::AudioListener*, bool, bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::SetOrSwitchAudioListener)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xa7877dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SetOrSwitchAudioListener", {}, {::i2c::type_of<::UnityEngine::AudioListener*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.SetOrSwitchAudioOutCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)(::Photon::Voice::Unity::AudioOutCapture*, bool, bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::SetOrSwitchAudioOutCapture)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa787e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SetOrSwitchAudioOutCapture", {}, {::i2c::type_of<::Photon::Voice::Unity::AudioOutCapture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.InitAudioOutCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::InitAudioOutCapture)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0xa7850ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"InitAudioOutCapture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.UnsubscribeFromAudioOutCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)(bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::UnsubscribeFromAudioOutCapture)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xa785b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"UnsubscribeFromAudioOutCapture", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.AudioListenerChecks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)(::UnityEngine::AudioListener*, bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::AudioListenerChecks)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa787b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"AudioListenerChecks", {}, {::i2c::type_of<::UnityEngine::AudioListener*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.AudioOutCaptureChecks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)(::Photon::Voice::Unity::AudioOutCapture*, bool, bool)>(&::Photon::Voice::Unity::WebRtcAudioDsp::AudioOutCaptureChecks)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xa785640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"AudioOutCaptureChecks", {}, {::i2c::type_of<::Photon::Voice::Unity::AudioOutCapture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.SetOrSwitchAudioListener
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)(::UnityEngine::AudioListener*)>(&::Photon::Voice::Unity::WebRtcAudioDsp::SetOrSwitchAudioListener)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa7880d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SetOrSwitchAudioListener", {}, {::i2c::type_of<::UnityEngine::AudioListener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp.SetOrSwitchAudioOutCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::WebRtcAudioDsp::*)(::Photon::Voice::Unity::AudioOutCapture*)>(&::Photon::Voice::Unity::WebRtcAudioDsp::SetOrSwitchAudioOutCapture)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa7881b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SetOrSwitchAudioOutCapture", {}, {::i2c::type_of<::Photon::Voice::Unity::AudioOutCapture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::WebRtcAudioDsp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::WebRtcAudioDsp::*)()>(&::Photon::Voice::Unity::WebRtcAudioDsp::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa78829c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_aec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aec;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_aec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aec;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_aec(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aec = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_aecHighPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecHighPass;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_aecHighPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecHighPass;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_aecHighPass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aecHighPass = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_agc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agc;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_agc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agc;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_agc(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agc = value;
}
constexpr int32_t& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_agcCompressionGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agcCompressionGain;
}
constexpr int32_t const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_agcCompressionGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agcCompressionGain;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_agcCompressionGain(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agcCompressionGain = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_vad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vad;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_vad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vad;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_vad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vad = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_highPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highPass;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_highPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highPass;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_highPass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highPass = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_bypass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypass;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_bypass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypass;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_bypass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypass = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_noiseSuppression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseSuppression;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_noiseSuppression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseSuppression;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_noiseSuppression(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseSuppression = value;
}
constexpr int32_t& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_reverseStreamDelayMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamDelayMs;
}
constexpr int32_t const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_reverseStreamDelayMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseStreamDelayMs;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_reverseStreamDelayMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseStreamDelayMs = value;
}
constexpr int32_t& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_reverseChannels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseChannels;
}
constexpr int32_t const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_reverseChannels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseChannels;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_reverseChannels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseChannels = value;
}
constexpr ::Photon::Voice::WebRTCAudioProcessor*& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_proc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proc;
}
constexpr ::Photon::Voice::WebRTCAudioProcessor* const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_proc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___proc;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_proc(::Photon::Voice::WebRTCAudioProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___proc = value;
}
constexpr ::UnityW<::UnityEngine::AudioListener>& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_audioListener()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioListener;
}
constexpr ::UnityW<::UnityEngine::AudioListener> const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_audioListener() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioListener;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_audioListener(::UnityW<::UnityEngine::AudioListener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioListener = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::AudioOutCapture>& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_audioOutCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOutCapture;
}
constexpr ::UnityW<::Photon::Voice::Unity::AudioOutCapture> const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_audioOutCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioOutCapture;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_audioOutCapture(::UnityW<::Photon::Voice::Unity::AudioOutCapture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioOutCapture = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_aecStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecStarted;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_aecStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecStarted;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_aecStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aecStarted = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_autoDestroyAudioOutCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoDestroyAudioOutCapture;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_autoDestroyAudioOutCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoDestroyAudioOutCapture;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_autoDestroyAudioOutCapture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoDestroyAudioOutCapture = value;
}
constexpr ::Photon::Voice::LocalVoiceAudioShort*& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_localVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr ::Photon::Voice::LocalVoiceAudioShort* const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_localVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudioShort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVoice = value;
}
constexpr int32_t& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_outputSampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputSampleRate;
}
constexpr int32_t const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_outputSampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputSampleRate;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_outputSampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputSampleRate = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorder;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recorder = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_ForceNormalAecInMobile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceNormalAecInMobile;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_ForceNormalAecInMobile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceNormalAecInMobile;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_ForceNormalAecInMobile(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceNormalAecInMobile = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_aecOnlyWhenEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecOnlyWhenEnabled;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_aecOnlyWhenEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aecOnlyWhenEnabled;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_aecOnlyWhenEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aecOnlyWhenEnabled = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_AutoRestartOnAudioChannelsMismatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoRestartOnAudioChannelsMismatch;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_AutoRestartOnAudioChannelsMismatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoRestartOnAudioChannelsMismatch;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_AutoRestartOnAudioChannelsMismatch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoRestartOnAudioChannelsMismatch = value;
}
constexpr ::System::Object*& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_threadSafety()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadSafety;
}
constexpr ::System::Object* const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_threadSafety() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadSafety;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_threadSafety(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threadSafety = value;
}
constexpr bool& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_AECMobileComfortNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AECMobileComfortNoise;
}
constexpr bool const& Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_get_AECMobileComfortNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AECMobileComfortNoise;
}
constexpr void Photon::Voice::Unity::WebRtcAudioDsp::__cordl_internal_set_AECMobileComfortNoise(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AECMobileComfortNoise = value;
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::setStaticF_channelsMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::AudioSpeakerMode,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::AudioSpeakerMode,int32_t>*, "channelsMap", ::Photon::Voice::Unity::WebRtcAudioDsp*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::AudioSpeakerMode,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::AudioSpeakerMode,int32_t>* Photon::Voice::Unity::WebRtcAudioDsp::getStaticF_channelsMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::AudioSpeakerMode,int32_t>*, "channelsMap", ::Photon::Voice::Unity::WebRtcAudioDsp*>();
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_AEC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AEC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_AEC(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AEC", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_AECMobile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AECMobile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_AECMobile(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AECMobile", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_AecHighPass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AecHighPass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_AecHighPass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AecHighPass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::Unity::WebRtcAudioDsp::get_ReverseStreamDelayMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_ReverseStreamDelayMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_ReverseStreamDelayMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_ReverseStreamDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_NoiseSuppression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_NoiseSuppression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_NoiseSuppression(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_NoiseSuppression", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_HighPass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_HighPass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_HighPass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_HighPass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_Bypass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_Bypass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_Bypass(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_Bypass", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_AGC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AGC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_AGC(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AGC", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::Unity::WebRtcAudioDsp::get_AgcCompressionGain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AgcCompressionGain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_AgcCompressionGain(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AgcCompressionGain", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_VAD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_VAD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_VAD(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_VAD", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::get_AecOnlyWhenEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"get_AecOnlyWhenEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::set_AecOnlyWhenEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"set_AecOnlyWhenEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::SupportedPlatformCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SupportedPlatformCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::ToggleAec()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"ToggleAec", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::ToggleAecOutputListener(bool  on)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"ToggleAecOutputListener", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, on);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::StartAec()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"StartAec", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::OnAudioConfigurationChanged(bool  deviceWasChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnAudioConfigurationChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceWasChanged);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::OnAudioOutFrameFloat(::ArrayW<float_t>  data, int32_t  outChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnAudioOutFrameFloat", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, outChannels);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::PhotonVoiceCreated(::Photon::Voice::Unity::PhotonVoiceCreatedParams*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"PhotonVoiceCreated", {}, {::i2c::type_of<::Photon::Voice::Unity::PhotonVoiceCreatedParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::PhotonVoiceRemoved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"PhotonVoiceRemoved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::StopAllProcessing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"StopAllProcessing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::Restart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"Restart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::SetOrSwitchAudioListener(::UnityEngine::AudioListener*  listener, bool  extraChecks, bool  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SetOrSwitchAudioListener", {}, {::i2c::type_of<::UnityEngine::AudioListener*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listener, extraChecks, log);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::SetOrSwitchAudioOutCapture(::Photon::Voice::Unity::AudioOutCapture*  capture, bool  extraChecks, bool  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SetOrSwitchAudioOutCapture", {}, {::i2c::type_of<::Photon::Voice::Unity::AudioOutCapture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, capture, extraChecks, log);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::InitAudioOutCapture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"InitAudioOutCapture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::UnsubscribeFromAudioOutCapture(bool  destroy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"UnsubscribeFromAudioOutCapture", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destroy);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::AudioListenerChecks(::UnityEngine::AudioListener*  listener, bool  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"AudioListenerChecks", {}, {::i2c::type_of<::UnityEngine::AudioListener*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listener, log);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::AudioOutCaptureChecks(::Photon::Voice::Unity::AudioOutCapture*  capture, bool  listenerChecks, bool  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"AudioOutCaptureChecks", {}, {::i2c::type_of<::Photon::Voice::Unity::AudioOutCapture*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, capture, listenerChecks, log);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::SetOrSwitchAudioListener(::UnityEngine::AudioListener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SetOrSwitchAudioListener", {}, {::i2c::type_of<::UnityEngine::AudioListener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listener);
}
inline bool Photon::Voice::Unity::WebRtcAudioDsp::SetOrSwitchAudioOutCapture(::Photon::Voice::Unity::AudioOutCapture*  capture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {"SetOrSwitchAudioOutCapture", {}, {::i2c::type_of<::Photon::Voice::Unity::AudioOutCapture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, capture);
}
inline void Photon::Voice::Unity::WebRtcAudioDsp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::WebRtcAudioDsp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::WebRtcAudioDsp* Photon::Voice::Unity::WebRtcAudioDsp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::WebRtcAudioDsp*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::WebRtcAudioDsp::WebRtcAudioDsp()   {
}
