#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Recorder.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_impl.hpp"
#include "Photon/Voice/Unity/zzzz__NativeAndroidMicrophoneSettings_impl.hpp"
#include "Photon/Voice/Unity/zzzz__PhotonVoiceCreatedParams_impl.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_InputSourceType_impl.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_MicType_impl.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_SampleTypeConv_impl.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_impl.hpp"
#include "Photon/Voice/zzzz__OpusCodec_FrameDuration_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "POpusCodec/Enums/zzzz__SamplingRate_def.hpp"
#include "Photon/Voice/Unity/zzzz__AudioInEnumerator_def.hpp"
#include "Photon/Voice/Unity/zzzz__MicWrapper_def.hpp"
#include "Photon/Voice/Unity/zzzz__NativeAndroidMicrophoneSettings_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_InputSourceType_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_MicType_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_SampleTypeConv_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceLogger_def.hpp"
#include "Photon/Voice/zzzz__AudioUtil_def.hpp"
#include "Photon/Voice/zzzz__DeviceInfo_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IAudioInChangeNotifier_def.hpp"
#include "Photon/Voice/zzzz__IDeviceEnumerator_def.hpp"
#include "Photon/Voice/zzzz__ILocalVoiceAudio_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
#include "Photon/Voice/zzzz__OpusCodec_FrameDuration_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_Voice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::LocalVoice* (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_Voice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76776c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_Voice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_InputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IAudioDesc* (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_InputSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa767774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_InputSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_MicrophoneDeviceChangeDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_MicrophoneDeviceChangeDetected)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa767328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_MicrophoneDeviceChangeDetected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_MicrophoneDeviceChangeDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_MicrophoneDeviceChangeDetected)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa766598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_MicrophoneDeviceChangeDetected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_subscribedToSystemChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_subscribedToSystemChanges)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa76777c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_subscribedToSystemChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_PhotonMicrophoneEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IDeviceEnumerator* (*)()>(&::Photon::Voice::Unity::Recorder::get_PhotonMicrophoneEnumerator)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa76779c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_PhotonMicrophoneEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_IsInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa767b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_RequiresInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_RequiresInit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa767b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_RequiresInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_RequiresRestart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_RequiresRestart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa767b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_RequiresRestart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_RequiresRestart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_RequiresRestart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa767b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_RequiresRestart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_TransmitEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_TransmitEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa767b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_TransmitEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_TransmitEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_TransmitEnabled)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa767b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_TransmitEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_Encrypt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa767c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_Encrypt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_Encrypt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_Encrypt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa767c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_Encrypt", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_DebugEchoMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_DebugEchoMode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa767c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_DebugEchoMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_DebugEchoMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_DebugEchoMode)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa767d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_DebugEchoMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_ReliableMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_ReliableMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa767e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_ReliableMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_ReliableMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_ReliableMode)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa767e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_ReliableMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_VoiceDetection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_VoiceDetection)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa767ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_VoiceDetection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_VoiceDetection)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa7681f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_VoiceDetection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_VoiceDetectionThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_VoiceDetectionThreshold)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa768394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetectionThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_VoiceDetectionThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(float_t)>(&::Photon::Voice::Unity::Recorder::set_VoiceDetectionThreshold)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa768838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_VoiceDetectionThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_VoiceDetectionDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_VoiceDetectionDelayMs)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa768a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetectionDelayMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_VoiceDetectionDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(int32_t)>(&::Photon::Voice::Unity::Recorder::set_VoiceDetectionDelayMs)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa768d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_VoiceDetectionDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_UserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_UserData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa768df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_UserData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_UserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::System::Object*)>(&::Photon::Voice::Unity::Recorder::set_UserData)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa768dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_UserData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_InputFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::Photon::Voice::IAudioDesc*>* (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_InputFactory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa768e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_InputFactory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_InputFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::System::Func_1<::Photon::Voice::IAudioDesc*>*)>(&::Photon::Voice::Unity::Recorder::set_InputFactory)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa768e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_InputFactory", {}, {::i2c::type_of<::System::Func_1<::Photon::Voice::IAudioDesc*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_VoiceDetector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::AudioUtil_IVoiceDetector* (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_VoiceDetector)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa7682d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_UnityMicrophoneDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_UnityMicrophoneDevice)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa768fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_UnityMicrophoneDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_UnityMicrophoneDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::StringW)>(&::Photon::Voice::Unity::Recorder::set_UnityMicrophoneDevice)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa7691d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_UnityMicrophoneDevice", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_PhotonMicrophoneDeviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_PhotonMicrophoneDeviceId)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa769510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_PhotonMicrophoneDeviceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_PhotonMicrophoneDeviceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(int32_t)>(&::Photon::Voice::Unity::Recorder::set_PhotonMicrophoneDeviceId)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa769618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_PhotonMicrophoneDeviceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_AudioGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_AudioGroup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa769714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_AudioGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_AudioGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(uint8_t)>(&::Photon::Voice::Unity::Recorder::set_AudioGroup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa769718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_AudioGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_InterestGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_InterestGroup)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa767cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_InterestGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_InterestGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(uint8_t)>(&::Photon::Voice::Unity::Recorder::set_InterestGroup)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa76971c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_InterestGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_IsCurrentlyTransmitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_IsCurrentlyTransmitting)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa769864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_IsCurrentlyTransmitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_LevelMeter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::AudioUtil_ILevelMeter* (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_LevelMeter)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa769894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_LevelMeter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_VoiceDetectorCalibrating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_VoiceDetectorCalibrating)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa769958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetectorCalibrating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_voiceAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::ILocalVoiceAudio* (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_voiceAudio)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa768fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_voiceAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_SourceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Recorder_InputSourceType (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_SourceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa769a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_SourceType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_SourceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::GlobalNamespace::Recorder_InputSourceType)>(&::Photon::Voice::Unity::Recorder::set_SourceType)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa769a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_SourceType", {}, {::i2c::type_of<::GlobalNamespace::Recorder_InputSourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_MicrophoneType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Recorder_MicType (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_MicrophoneType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa769b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_MicrophoneType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_MicrophoneType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::GlobalNamespace::Recorder_MicType)>(&::Photon::Voice::Unity::Recorder::set_MicrophoneType)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa769b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_MicrophoneType", {}, {::i2c::type_of<::GlobalNamespace::Recorder_MicType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_TypeConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Recorder_SampleTypeConv (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_TypeConvert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa769cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_TypeConvert", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_TypeConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::GlobalNamespace::Recorder_SampleTypeConv)>(&::Photon::Voice::Unity::Recorder::set_TypeConvert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa769cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_TypeConvert", {}, {::i2c::type_of<::GlobalNamespace::Recorder_SampleTypeConv>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_AudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_AudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa769cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_AudioClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_AudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::UnityEngine::AudioClip*)>(&::Photon::Voice::Unity::Recorder::set_AudioClip)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa769ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_AudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_LoopAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_LoopAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa769e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_LoopAudioClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_LoopAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_LoopAudioClip)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa769e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_LoopAudioClip", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::SamplingRate (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_SamplingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa769f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_SamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::POpusCodec::Enums::SamplingRate)>(&::Photon::Voice::Unity::Recorder::set_SamplingRate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa769f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_SamplingRate", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_FrameDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OpusCodec_FrameDuration (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_FrameDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76a208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_FrameDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_FrameDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::GlobalNamespace::OpusCodec_FrameDuration)>(&::Photon::Voice::Unity::Recorder::set_FrameDuration)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa76a210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_FrameDuration", {}, {::i2c::type_of<::GlobalNamespace::OpusCodec_FrameDuration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_Bitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_Bitrate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76a33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_Bitrate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_Bitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(int32_t)>(&::Photon::Voice::Unity::Recorder::set_Bitrate)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xa76a344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_Bitrate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_IsRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76a5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_IsRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_IsRecording)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa76a604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_IsRecording", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_ReactOnSystemChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_ReactOnSystemChanges)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76aa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_ReactOnSystemChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_ReactOnSystemChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_ReactOnSystemChanges)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa765b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_ReactOnSystemChanges", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_AutoStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_AutoStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_AutoStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_AutoStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_AutoStart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa76b514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_AutoStart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_RecordOnlyWhenEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_RecordOnlyWhenEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_RecordOnlyWhenEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_RecordOnlyWhenEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_RecordOnlyWhenEnabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa76b540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_RecordOnlyWhenEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_SkipDeviceChangeChecks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_SkipDeviceChangeChecks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_SkipDeviceChangeChecks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_SkipDeviceChangeChecks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_SkipDeviceChangeChecks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_SkipDeviceChangeChecks", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_StopRecordingWhenPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_StopRecordingWhenPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_StopRecordingWhenPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_StopRecordingWhenPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_StopRecordingWhenPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_StopRecordingWhenPaused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_UseOnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_UseOnAudioFilterRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_UseOnAudioFilterRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_UseOnAudioFilterRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_UseOnAudioFilterRead)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa76b6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_UseOnAudioFilterRead", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_TrySamplingRateMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_TrySamplingRateMatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_TrySamplingRateMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_TrySamplingRateMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_TrySamplingRateMatch)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa76b7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_TrySamplingRateMatch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_UseMicrophoneTypeFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_UseMicrophoneTypeFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_UseMicrophoneTypeFallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_UseMicrophoneTypeFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_UseMicrophoneTypeFallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_UseMicrophoneTypeFallback", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_RecordOnlyWhenJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_RecordOnlyWhenJoined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_RecordOnlyWhenJoined", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_RecordOnlyWhenJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::set_RecordOnlyWhenJoined)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa76b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_RecordOnlyWhenJoined", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_MicrophonesEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IDeviceEnumerator* (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_MicrophonesEnumerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76ba98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_MicrophonesEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.get_MicrophoneDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::DeviceInfo (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::get_MicrophoneDevice)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa76bd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_MicrophoneDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.set_MicrophoneDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::Photon::Voice::DeviceInfo)>(&::Photon::Voice::Unity::Recorder::set_MicrophoneDevice)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa76c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_MicrophoneDevice", {}, {::i2c::type_of<::Photon::Voice::DeviceInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::Photon::Voice::Unity::VoiceConnection*)>(&::Photon::Voice::Unity::Recorder::Init)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xa76c304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"Init", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.ReInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::ReInit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76c7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"ReInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.RestartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::RestartRecording)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa76c7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"RestartRecording", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.VoiceDetectorCalibrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(int32_t, ::System::Action_1<float_t>*)>(&::Photon::Voice::Unity::Recorder::VoiceDetectorCalibrate)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa76ca0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"VoiceDetectorCalibrate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::StartRecording)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xa76a730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"StartRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::StopRecording)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa76a624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"StopRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.SetAndroidNativeMicrophoneSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings)>(&::Photon::Voice::Unity::Recorder::SetAndroidNativeMicrophoneSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa76cd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"SetAndroidNativeMicrophoneSettings", {}, {::i2c::type_of<::Photon::Voice::Unity::NativeAndroidMicrophoneSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.SetAndroidNativeMicrophoneSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)(bool, bool, bool)>(&::Photon::Voice::Unity::Recorder::SetAndroidNativeMicrophoneSettings)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xa76cd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"SetAndroidNativeMicrophoneSettings", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.ResetLocalAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::ResetLocalAudio)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa76d028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"ResetLocalAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CompareUnityMicNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Photon::Voice::Unity::Recorder::CompareUnityMicNames)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa769460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CompareUnityMicNames", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.IsDefaultUnityMic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Photon::Voice::Unity::Recorder::IsDefaultUnityMic)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa76d278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"IsDefaultUnityMic", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::Setup)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xa76d2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CreateLocalVoiceAudioAndSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::LocalVoice* (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::CreateLocalVoiceAudioAndSource)> {
  constexpr static std::size_t size = 0x13e4;
  constexpr static std::size_t addrs = 0xa76d6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CreateLocalVoiceAudioAndSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CreateMicWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Unity::MicWrapper* (::Photon::Voice::Unity::Recorder::*)(::StringW, int32_t, ::Photon::Voice::Unity::VoiceLogger*)>(&::Photon::Voice::Unity::Recorder::CreateMicWrapper)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa76eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::Recorder*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.SendPhotonVoiceCreatedMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::SendPhotonVoiceCreatedMessage)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa76ef54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::Recorder*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa76f010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.RemoveVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::RemoveVoice)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xa76f120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"RemoveVoice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.OnAudioConfigChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::OnAudioConfigChanged)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa76f3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnAudioConfigChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.PhotonMicrophoneChangeDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::PhotonMicrophoneChangeDetected)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa76f524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"PhotonMicrophoneChangeDetected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.HandleDeviceChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::HandleDeviceChange)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xa76f614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"HandleDeviceChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.SubscribeToSystemChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::SubscribeToSystemChanges)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0xa76aa28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"SubscribeToSystemChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.UnsubscribeFromSystemChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::UnsubscribeFromSystemChanges)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xa76b1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"UnsubscribeFromSystemChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetThresholdFromDetector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::GetThresholdFromDetector)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0xa7683ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetThresholdFromDetector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetActivityDelayFromDetector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::GetActivityDelayFromDetector)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa768a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetActivityDelayFromDetector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetStatusFromDetector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::GetStatusFromDetector)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa767f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetStatusFromDetector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.IsValidUnityMic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Photon::Voice::Unity::Recorder::IsValidUnityMic)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa769168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"IsValidUnityMic", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa770120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa77012c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.IsValidPhotonMic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::IsValidPhotonMic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa770144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"IsValidPhotonMic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CheckIfMicrophoneIdIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Voice::IDeviceEnumerator*, int32_t)>(&::Photon::Voice::Unity::Recorder::CheckIfMicrophoneIdIsValid)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xa7701c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckIfMicrophoneIdIsValid", {}, {::i2c::type_of<::Photon::Voice::IDeviceEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.IsValidPhotonMic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)(int32_t)>(&::Photon::Voice::Unity::Recorder::IsValidPhotonMic)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa77014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"IsValidPhotonMic", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.OnApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::OnApplicationPause)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa77058c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa770ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.HandleApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::HandleApplicationPause)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0xa7706b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"HandleApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetSupportedSamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::SamplingRate (::Photon::Voice::Unity::Recorder::*)(int32_t)>(&::Photon::Voice::Unity::Recorder::GetSupportedSamplingRate)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa76eb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetSupportedSamplingRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetSupportedSamplingRateForUnityMicrophone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::SamplingRate (::Photon::Voice::Unity::Recorder::*)(::POpusCodec::Enums::SamplingRate)>(&::Photon::Voice::Unity::Recorder::GetSupportedSamplingRateForUnityMicrophone)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa770cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetSupportedSamplingRateForUnityMicrophone", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetSupportedSamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::SamplingRate (::Photon::Voice::Unity::Recorder::*)(::POpusCodec::Enums::SamplingRate, int32_t, int32_t)>(&::Photon::Voice::Unity::Recorder::GetSupportedSamplingRate)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xa770d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetSupportedSamplingRate", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetSupportedSamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::POpusCodec::Enums::SamplingRate (::Photon::Voice::Unity::Recorder::*)(::POpusCodec::Enums::SamplingRate)>(&::Photon::Voice::Unity::Recorder::GetSupportedSamplingRate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa7710d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetSupportedSamplingRate", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CheckAndSetSamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(::POpusCodec::Enums::SamplingRate)>(&::Photon::Voice::Unity::Recorder::CheckAndSetSamplingRate)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xa769f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckAndSetSamplingRate", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CheckAndSetSamplingRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::CheckAndSetSamplingRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa769508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckAndSetSamplingRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.StopRecordingInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::StopRecordingInternal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa76b59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"StopRecordingInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CheckAndAutoStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::CheckAndAutoStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76b530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckAndAutoStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CheckAndAutoStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)(bool)>(&::Photon::Voice::Unity::Recorder::CheckAndAutoStart)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0xa76f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckAndAutoStart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.StartRecordingInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::StartRecordingInternal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa76cc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"StartRecordingInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetMicrophonesEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IDeviceEnumerator* (::Photon::Voice::Unity::Recorder::*)(::GlobalNamespace::Recorder_MicType)>(&::Photon::Voice::Unity::Recorder::GetMicrophonesEnumerator)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa76baa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetMicrophonesEnumerator", {}, {::i2c::type_of<::GlobalNamespace::Recorder_MicType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetDeviceById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::DeviceInfo (::Photon::Voice::Unity::Recorder::*)(int32_t)>(&::Photon::Voice::Unity::Recorder::GetDeviceById)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xa7711e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetDeviceById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.GetDeviceById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::DeviceInfo (::Photon::Voice::Unity::Recorder::*)(::StringW)>(&::Photon::Voice::Unity::Recorder::GetDeviceById)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xa76be3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetDeviceById", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CheckIfThereIsAtLeastOneMic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::CheckIfThereIsAtLeastOneMic)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa76ead8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckIfThereIsAtLeastOneMic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder.CreatePhotonDeviceEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::IDeviceEnumerator* (*)(::Photon::Voice::Unity::VoiceLogger*)>(&::Photon::Voice::Unity::Recorder::CreatePhotonDeviceEnumerator)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa767888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CreatePhotonDeviceEnumerator", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceLogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder::*)()>(&::Photon::Voice::Unity::Recorder::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa771568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_voiceDetection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetection;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_voiceDetection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetection;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_voiceDetection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceDetection = value;
}
constexpr float_t& Photon::Voice::Unity::Recorder::__cordl_internal_get_voiceDetectionThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetectionThreshold;
}
constexpr float_t const& Photon::Voice::Unity::Recorder::__cordl_internal_get_voiceDetectionThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetectionThreshold;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_voiceDetectionThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceDetectionThreshold = value;
}
constexpr int32_t& Photon::Voice::Unity::Recorder::__cordl_internal_get_voiceDetectionDelayMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetectionDelayMs;
}
constexpr int32_t const& Photon::Voice::Unity::Recorder::__cordl_internal_get_voiceDetectionDelayMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetectionDelayMs;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_voiceDetectionDelayMs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceDetectionDelayMs = value;
}
constexpr ::System::Object*& Photon::Voice::Unity::Recorder::__cordl_internal_get_userData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userData;
}
constexpr ::System::Object* const& Photon::Voice::Unity::Recorder::__cordl_internal_get_userData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userData;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_userData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userData = value;
}
constexpr ::Photon::Voice::LocalVoice*& Photon::Voice::Unity::Recorder::__cordl_internal_get_voice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voice;
}
constexpr ::Photon::Voice::LocalVoice* const& Photon::Voice::Unity::Recorder::__cordl_internal_get_voice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voice;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_voice(::Photon::Voice::LocalVoice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voice = value;
}
constexpr ::StringW& Photon::Voice::Unity::Recorder::__cordl_internal_get_unityMicrophoneDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityMicrophoneDevice;
}
constexpr ::StringW const& Photon::Voice::Unity::Recorder::__cordl_internal_get_unityMicrophoneDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityMicrophoneDevice;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_unityMicrophoneDevice(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityMicrophoneDevice = value;
}
constexpr int32_t& Photon::Voice::Unity::Recorder::__cordl_internal_get_photonMicrophoneDeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonMicrophoneDeviceId;
}
constexpr int32_t const& Photon::Voice::Unity::Recorder::__cordl_internal_get_photonMicrophoneDeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonMicrophoneDeviceId;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_photonMicrophoneDeviceId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonMicrophoneDeviceId = value;
}
constexpr ::Photon::Voice::IAudioDesc*& Photon::Voice::Unity::Recorder::__cordl_internal_get_inputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSource;
}
constexpr ::Photon::Voice::IAudioDesc* const& Photon::Voice::Unity::Recorder::__cordl_internal_get_inputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputSource;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_inputSource(::Photon::Voice::IAudioDesc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputSource = value;
}
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::Unity::Recorder::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::Unity::Recorder::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_client(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& Photon::Voice::Unity::Recorder::__cordl_internal_get_voiceConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& Photon::Voice::Unity::Recorder::__cordl_internal_get_voiceConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceConnection = value;
}
constexpr uint8_t& Photon::Voice::Unity::Recorder::__cordl_internal_get_interestGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interestGroup;
}
constexpr uint8_t const& Photon::Voice::Unity::Recorder::__cordl_internal_get_interestGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interestGroup;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_interestGroup(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interestGroup = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_debugEchoMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugEchoMode;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_debugEchoMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugEchoMode;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_debugEchoMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugEchoMode = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_reliableMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableMode;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_reliableMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableMode;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_reliableMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableMode = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_encrypt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encrypt;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_encrypt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encrypt;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_encrypt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encrypt = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_transmitEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transmitEnabled;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_transmitEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transmitEnabled;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_transmitEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transmitEnabled = value;
}
constexpr ::POpusCodec::Enums::SamplingRate& Photon::Voice::Unity::Recorder::__cordl_internal_get_samplingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingRate;
}
constexpr ::POpusCodec::Enums::SamplingRate const& Photon::Voice::Unity::Recorder::__cordl_internal_get_samplingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingRate;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_samplingRate(::POpusCodec::Enums::SamplingRate  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samplingRate = value;
}
constexpr ::GlobalNamespace::OpusCodec_FrameDuration& Photon::Voice::Unity::Recorder::__cordl_internal_get_frameDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameDuration;
}
constexpr ::GlobalNamespace::OpusCodec_FrameDuration const& Photon::Voice::Unity::Recorder::__cordl_internal_get_frameDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameDuration;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_frameDuration(::GlobalNamespace::OpusCodec_FrameDuration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameDuration = value;
}
constexpr int32_t& Photon::Voice::Unity::Recorder::__cordl_internal_get_bitrate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitrate;
}
constexpr int32_t const& Photon::Voice::Unity::Recorder::__cordl_internal_get_bitrate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitrate;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_bitrate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitrate = value;
}
constexpr ::GlobalNamespace::Recorder_InputSourceType& Photon::Voice::Unity::Recorder::__cordl_internal_get_sourceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceType;
}
constexpr ::GlobalNamespace::Recorder_InputSourceType const& Photon::Voice::Unity::Recorder::__cordl_internal_get_sourceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceType;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_sourceType(::GlobalNamespace::Recorder_InputSourceType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceType = value;
}
constexpr ::GlobalNamespace::Recorder_MicType& Photon::Voice::Unity::Recorder::__cordl_internal_get_microphoneType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___microphoneType;
}
constexpr ::GlobalNamespace::Recorder_MicType const& Photon::Voice::Unity::Recorder::__cordl_internal_get_microphoneType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___microphoneType;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_microphoneType(::GlobalNamespace::Recorder_MicType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___microphoneType = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& Photon::Voice::Unity::Recorder::__cordl_internal_get_audioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& Photon::Voice::Unity::Recorder::__cordl_internal_get_audioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClip;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClip = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_loopAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopAudioClip;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_loopAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopAudioClip;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_loopAudioClip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopAudioClip = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_isRecording()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRecording;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_isRecording() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRecording;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_isRecording(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRecording = value;
}
constexpr ::System::Func_1<::Photon::Voice::IAudioDesc*>*& Photon::Voice::Unity::Recorder::__cordl_internal_get_inputFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputFactory;
}
constexpr ::System::Func_1<::Photon::Voice::IAudioDesc*>* const& Photon::Voice::Unity::Recorder::__cordl_internal_get_inputFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputFactory;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_inputFactory(::System::Func_1<::Photon::Voice::IAudioDesc*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputFactory = value;
}
constexpr ::Photon::Voice::IAudioInChangeNotifier*& Photon::Voice::Unity::Recorder::__cordl_internal_get_photonMicChangeNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonMicChangeNotifier;
}
constexpr ::Photon::Voice::IAudioInChangeNotifier* const& Photon::Voice::Unity::Recorder::__cordl_internal_get_photonMicChangeNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonMicChangeNotifier;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_photonMicChangeNotifier(::Photon::Voice::IAudioInChangeNotifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonMicChangeNotifier = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_reactOnSystemChanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactOnSystemChanges;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_reactOnSystemChanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactOnSystemChanges;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_reactOnSystemChanges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactOnSystemChanges = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_subscribedToSystemChangesPhoton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedToSystemChangesPhoton;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_subscribedToSystemChangesPhoton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedToSystemChangesPhoton;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_subscribedToSystemChangesPhoton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribedToSystemChangesPhoton = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_subscribedToSystemChangesUnity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedToSystemChangesUnity;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_subscribedToSystemChangesUnity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribedToSystemChangesUnity;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_subscribedToSystemChangesUnity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribedToSystemChangesUnity = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_autoStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoStart;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_autoStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoStart;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_autoStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoStart = value;
}
constexpr ::Photon::Voice::Unity::NativeAndroidMicrophoneSettings& Photon::Voice::Unity::Recorder::__cordl_internal_get_nativeAndroidMicrophoneSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeAndroidMicrophoneSettings;
}
constexpr ::Photon::Voice::Unity::NativeAndroidMicrophoneSettings const& Photon::Voice::Unity::Recorder::__cordl_internal_get_nativeAndroidMicrophoneSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeAndroidMicrophoneSettings;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_nativeAndroidMicrophoneSettings(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativeAndroidMicrophoneSettings = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_recordOnlyWhenEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordOnlyWhenEnabled;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_recordOnlyWhenEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordOnlyWhenEnabled;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_recordOnlyWhenEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recordOnlyWhenEnabled = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_skipDeviceChangeChecks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipDeviceChangeChecks;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_skipDeviceChangeChecks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipDeviceChangeChecks;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_skipDeviceChangeChecks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipDeviceChangeChecks = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_wasRecordingBeforePause()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasRecordingBeforePause;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_wasRecordingBeforePause() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasRecordingBeforePause;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_wasRecordingBeforePause(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasRecordingBeforePause = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_isPausedOrInBackground()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPausedOrInBackground;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_isPausedOrInBackground() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPausedOrInBackground;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_isPausedOrInBackground(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPausedOrInBackground = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_stopRecordingWhenPaused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopRecordingWhenPaused;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_stopRecordingWhenPaused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stopRecordingWhenPaused;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_stopRecordingWhenPaused(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stopRecordingWhenPaused = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_useOnAudioFilterRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useOnAudioFilterRead;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_useOnAudioFilterRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useOnAudioFilterRead;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_useOnAudioFilterRead(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useOnAudioFilterRead = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_trySamplingRateMatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trySamplingRateMatch;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_trySamplingRateMatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trySamplingRateMatch;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_trySamplingRateMatch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trySamplingRateMatch = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_useMicrophoneTypeFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMicrophoneTypeFallback;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_useMicrophoneTypeFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useMicrophoneTypeFallback;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_useMicrophoneTypeFallback(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useMicrophoneTypeFallback = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_recordOnlyWhenJoined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordOnlyWhenJoined;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_recordOnlyWhenJoined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordOnlyWhenJoined;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_recordOnlyWhenJoined(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recordOnlyWhenJoined = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_recordingStoppedExplicitly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordingStoppedExplicitly;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_recordingStoppedExplicitly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordingStoppedExplicitly;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_recordingStoppedExplicitly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recordingStoppedExplicitly = value;
}
constexpr ::Photon::Voice::IDeviceEnumerator*& Photon::Voice::Unity::Recorder::__cordl_internal_get_photonMicrophonesEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonMicrophonesEnumerator;
}
constexpr ::Photon::Voice::IDeviceEnumerator* const& Photon::Voice::Unity::Recorder::__cordl_internal_get_photonMicrophonesEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonMicrophonesEnumerator;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_photonMicrophonesEnumerator(::Photon::Voice::IDeviceEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonMicrophonesEnumerator = value;
}
constexpr ::Photon::Voice::Unity::AudioInEnumerator*& Photon::Voice::Unity::Recorder::__cordl_internal_get_unityMicrophonesEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityMicrophonesEnumerator;
}
constexpr ::Photon::Voice::Unity::AudioInEnumerator* const& Photon::Voice::Unity::Recorder::__cordl_internal_get_unityMicrophonesEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityMicrophonesEnumerator;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_unityMicrophonesEnumerator(::Photon::Voice::Unity::AudioInEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityMicrophonesEnumerator = value;
}
constexpr ::System::Object*& Photon::Voice::Unity::Recorder::__cordl_internal_get_microphoneDeviceChangeDetectedLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___microphoneDeviceChangeDetectedLock;
}
constexpr ::System::Object* const& Photon::Voice::Unity::Recorder::__cordl_internal_get_microphoneDeviceChangeDetectedLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___microphoneDeviceChangeDetectedLock;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_microphoneDeviceChangeDetectedLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___microphoneDeviceChangeDetectedLock = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get_microphoneDeviceChangeDetected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___microphoneDeviceChangeDetected;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get_microphoneDeviceChangeDetected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___microphoneDeviceChangeDetected;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set_microphoneDeviceChangeDetected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___microphoneDeviceChangeDetected = value;
}
constexpr bool& Photon::Voice::Unity::Recorder::__cordl_internal_get__RequiresRestart_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresRestart_k__BackingField;
}
constexpr bool const& Photon::Voice::Unity::Recorder::__cordl_internal_get__RequiresRestart_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresRestart_k__BackingField;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set__RequiresRestart_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequiresRestart_k__BackingField = value;
}
constexpr ::GlobalNamespace::Recorder_SampleTypeConv& Photon::Voice::Unity::Recorder::__cordl_internal_get__TypeConvert_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TypeConvert_k__BackingField;
}
constexpr ::GlobalNamespace::Recorder_SampleTypeConv const& Photon::Voice::Unity::Recorder::__cordl_internal_get__TypeConvert_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TypeConvert_k__BackingField;
}
constexpr void Photon::Voice::Unity::Recorder::__cordl_internal_set__TypeConvert_k__BackingField(::GlobalNamespace::Recorder_SampleTypeConv  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TypeConvert_k__BackingField = value;
}
inline void Photon::Voice::Unity::Recorder::setStaticF_samplingRateValues(::System::Array*  value)  {
::cordl_internals::setStaticField<::System::Array*, "samplingRateValues", ::Photon::Voice::Unity::Recorder*>(std::forward<::System::Array*>(value));
}
inline ::System::Array* Photon::Voice::Unity::Recorder::getStaticF_samplingRateValues()  {
return ::cordl_internals::getStaticField<::System::Array*, "samplingRateValues", ::Photon::Voice::Unity::Recorder*>();
}
inline void Photon::Voice::Unity::Recorder::setStaticF_photonMicrophoneEnumerator(::Photon::Voice::IDeviceEnumerator*  value)  {
::cordl_internals::setStaticField<::Photon::Voice::IDeviceEnumerator*, "photonMicrophoneEnumerator", ::Photon::Voice::Unity::Recorder*>(std::forward<::Photon::Voice::IDeviceEnumerator*>(value));
}
inline ::Photon::Voice::IDeviceEnumerator* Photon::Voice::Unity::Recorder::getStaticF_photonMicrophoneEnumerator()  {
return ::cordl_internals::getStaticField<::Photon::Voice::IDeviceEnumerator*, "photonMicrophoneEnumerator", ::Photon::Voice::Unity::Recorder*>();
}
inline ::Photon::Voice::LocalVoice* Photon::Voice::Unity::Recorder::get_Voice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_Voice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoice*>(this, ___internal_method);
}
inline ::Photon::Voice::IAudioDesc* Photon::Voice::Unity::Recorder::get_InputSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_InputSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IAudioDesc*>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::get_MicrophoneDeviceChangeDetected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_MicrophoneDeviceChangeDetected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_MicrophoneDeviceChangeDetected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_MicrophoneDeviceChangeDetected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_subscribedToSystemChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_subscribedToSystemChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Photon::Voice::IDeviceEnumerator* Photon::Voice::Unity::Recorder::get_PhotonMicrophoneEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_PhotonMicrophoneEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IDeviceEnumerator*>(nullptr, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::get_RequiresInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_RequiresInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::get_RequiresRestart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_RequiresRestart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_RequiresRestart(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_RequiresRestart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_TransmitEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_TransmitEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_TransmitEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_TransmitEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_Encrypt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_Encrypt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_Encrypt(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_Encrypt", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_DebugEchoMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_DebugEchoMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_DebugEchoMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_DebugEchoMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_ReliableMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_ReliableMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_ReliableMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_ReliableMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_VoiceDetection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_VoiceDetection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_VoiceDetection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Voice::Unity::Recorder::get_VoiceDetectionThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetectionThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_VoiceDetectionThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_VoiceDetectionThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::Unity::Recorder::get_VoiceDetectionDelayMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetectionDelayMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_VoiceDetectionDelayMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_VoiceDetectionDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* Photon::Voice::Unity::Recorder::get_UserData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_UserData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_UserData(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_UserData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_1<::Photon::Voice::IAudioDesc*>* Photon::Voice::Unity::Recorder::get_InputFactory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_InputFactory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::Photon::Voice::IAudioDesc*>*>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_InputFactory(::System::Func_1<::Photon::Voice::IAudioDesc*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_InputFactory", {}, {::i2c::type_of<::System::Func_1<::Photon::Voice::IAudioDesc*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::AudioUtil_IVoiceDetector* Photon::Voice::Unity::Recorder::get_VoiceDetector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_IVoiceDetector*>(this, ___internal_method);
}
inline ::StringW Photon::Voice::Unity::Recorder::get_UnityMicrophoneDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_UnityMicrophoneDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_UnityMicrophoneDevice(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_UnityMicrophoneDevice", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::Unity::Recorder::get_PhotonMicrophoneDeviceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_PhotonMicrophoneDeviceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_PhotonMicrophoneDeviceId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_PhotonMicrophoneDeviceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t Photon::Voice::Unity::Recorder::get_AudioGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_AudioGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_AudioGroup(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_AudioGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t Photon::Voice::Unity::Recorder::get_InterestGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_InterestGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_InterestGroup(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_InterestGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_IsCurrentlyTransmitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_IsCurrentlyTransmitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Photon::Voice::AudioUtil_ILevelMeter* Photon::Voice::Unity::Recorder::get_LevelMeter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_LevelMeter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_ILevelMeter*>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::get_VoiceDetectorCalibrating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_VoiceDetectorCalibrating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Photon::Voice::ILocalVoiceAudio* Photon::Voice::Unity::Recorder::get_voiceAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_voiceAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::ILocalVoiceAudio*>(this, ___internal_method);
}
inline ::GlobalNamespace::Recorder_InputSourceType Photon::Voice::Unity::Recorder::get_SourceType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_SourceType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Recorder_InputSourceType>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_SourceType(::GlobalNamespace::Recorder_InputSourceType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_SourceType", {}, {::i2c::type_of<::GlobalNamespace::Recorder_InputSourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Recorder_MicType Photon::Voice::Unity::Recorder::get_MicrophoneType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_MicrophoneType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Recorder_MicType>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_MicrophoneType(::GlobalNamespace::Recorder_MicType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_MicrophoneType", {}, {::i2c::type_of<::GlobalNamespace::Recorder_MicType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Recorder_SampleTypeConv Photon::Voice::Unity::Recorder::get_TypeConvert()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_TypeConvert", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Recorder_SampleTypeConv>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_TypeConvert(::GlobalNamespace::Recorder_SampleTypeConv  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_TypeConvert", {}, {::i2c::type_of<::GlobalNamespace::Recorder_SampleTypeConv>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> Photon::Voice::Unity::Recorder::get_AudioClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_AudioClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_AudioClip(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_AudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_LoopAudioClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_LoopAudioClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_LoopAudioClip(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_LoopAudioClip", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::POpusCodec::Enums::SamplingRate Photon::Voice::Unity::Recorder::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::SamplingRate>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_SamplingRate(::POpusCodec::Enums::SamplingRate  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_SamplingRate", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OpusCodec_FrameDuration Photon::Voice::Unity::Recorder::get_FrameDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_FrameDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OpusCodec_FrameDuration>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_FrameDuration(::GlobalNamespace::OpusCodec_FrameDuration  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_FrameDuration", {}, {::i2c::type_of<::GlobalNamespace::OpusCodec_FrameDuration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::Unity::Recorder::get_Bitrate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_Bitrate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_Bitrate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_Bitrate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_IsRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_IsRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_IsRecording(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_IsRecording", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_ReactOnSystemChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_ReactOnSystemChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_ReactOnSystemChanges(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_ReactOnSystemChanges", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_AutoStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_AutoStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_AutoStart(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_AutoStart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_RecordOnlyWhenEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_RecordOnlyWhenEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_RecordOnlyWhenEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_RecordOnlyWhenEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_SkipDeviceChangeChecks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_SkipDeviceChangeChecks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_SkipDeviceChangeChecks(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_SkipDeviceChangeChecks", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_StopRecordingWhenPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_StopRecordingWhenPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_StopRecordingWhenPaused(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_StopRecordingWhenPaused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_UseOnAudioFilterRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_UseOnAudioFilterRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_UseOnAudioFilterRead(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_UseOnAudioFilterRead", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_TrySamplingRateMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_TrySamplingRateMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_TrySamplingRateMatch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_TrySamplingRateMatch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_UseMicrophoneTypeFallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_UseMicrophoneTypeFallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_UseMicrophoneTypeFallback(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_UseMicrophoneTypeFallback", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Unity::Recorder::get_RecordOnlyWhenJoined()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_RecordOnlyWhenJoined", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_RecordOnlyWhenJoined(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_RecordOnlyWhenJoined", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::IDeviceEnumerator* Photon::Voice::Unity::Recorder::get_MicrophonesEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_MicrophonesEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IDeviceEnumerator*>(this, ___internal_method);
}
inline ::Photon::Voice::DeviceInfo Photon::Voice::Unity::Recorder::get_MicrophoneDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"get_MicrophoneDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::DeviceInfo>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::set_MicrophoneDevice(::Photon::Voice::DeviceInfo  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"set_MicrophoneDevice", {}, {::i2c::type_of<::Photon::Voice::DeviceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::Recorder::Init(::Photon::Voice::Unity::VoiceConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"Init", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
inline void Photon::Voice::Unity::Recorder::ReInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"ReInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::RestartRecording(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"RestartRecording", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void Photon::Voice::Unity::Recorder::VoiceDetectorCalibrate(int32_t  durationMs, ::System::Action_1<float_t>*  detectionEndedCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"VoiceDetectorCalibrate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, durationMs, detectionEndedCallback);
}
inline void Photon::Voice::Unity::Recorder::StartRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"StartRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::StopRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"StopRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::SetAndroidNativeMicrophoneSettings(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings  nams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"SetAndroidNativeMicrophoneSettings", {}, {::i2c::type_of<::Photon::Voice::Unity::NativeAndroidMicrophoneSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nams);
}
inline bool Photon::Voice::Unity::Recorder::SetAndroidNativeMicrophoneSettings(bool  aec, bool  agc, bool  ns)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"SetAndroidNativeMicrophoneSettings", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, aec, agc, ns);
}
inline bool Photon::Voice::Unity::Recorder::ResetLocalAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"ResetLocalAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::CompareUnityMicNames(::StringW  mic1, ::StringW  mic2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CompareUnityMicNames", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mic1, mic2);
}
inline bool Photon::Voice::Unity::Recorder::IsDefaultUnityMic(::StringW  mic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"IsDefaultUnityMic", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mic);
}
inline void Photon::Voice::Unity::Recorder::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::LocalVoice* Photon::Voice::Unity::Recorder::CreateLocalVoiceAudioAndSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CreateLocalVoiceAudioAndSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoice*>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::MicWrapper* Photon::Voice::Unity::Recorder::CreateMicWrapper(::StringW  micDev, int32_t  samplingRateInt, ::Photon::Voice::Unity::VoiceLogger*  logger)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::Recorder*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Unity::MicWrapper*>(this, ___internal_method, micDev, samplingRateInt, logger);
}
inline void Photon::Voice::Unity::Recorder::SendPhotonVoiceCreatedMessage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::Recorder*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::RemoveVoice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"RemoveVoice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::OnAudioConfigChanged(bool  deviceWasChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnAudioConfigChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceWasChanged);
}
inline void Photon::Voice::Unity::Recorder::PhotonMicrophoneChangeDetected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"PhotonMicrophoneChangeDetected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::HandleDeviceChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"HandleDeviceChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::SubscribeToSystemChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"SubscribeToSystemChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::UnsubscribeFromSystemChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"UnsubscribeFromSystemChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::GetThresholdFromDetector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetThresholdFromDetector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::GetActivityDelayFromDetector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetActivityDelayFromDetector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::GetStatusFromDetector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetStatusFromDetector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::IsValidUnityMic(::StringW  mic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"IsValidUnityMic", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mic);
}
inline void Photon::Voice::Unity::Recorder::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::IsValidPhotonMic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"IsValidPhotonMic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::Recorder::CheckIfMicrophoneIdIsValid(::Photon::Voice::IDeviceEnumerator*  audioInEnumerator, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckIfMicrophoneIdIsValid", {}, {::i2c::type_of<::Photon::Voice::IDeviceEnumerator*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, audioInEnumerator, id);
}
inline bool Photon::Voice::Unity::Recorder::IsValidPhotonMic(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"IsValidPhotonMic", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void Photon::Voice::Unity::Recorder::OnApplicationPause(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paused);
}
inline void Photon::Voice::Unity::Recorder::OnApplicationFocus(bool  focused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focused);
}
inline void Photon::Voice::Unity::Recorder::HandleApplicationPause(bool  paused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"HandleApplicationPause", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paused);
}
inline ::POpusCodec::Enums::SamplingRate Photon::Voice::Unity::Recorder::GetSupportedSamplingRate(int32_t  requested)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetSupportedSamplingRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::SamplingRate>(this, ___internal_method, requested);
}
inline ::POpusCodec::Enums::SamplingRate Photon::Voice::Unity::Recorder::GetSupportedSamplingRateForUnityMicrophone(::POpusCodec::Enums::SamplingRate  requested)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetSupportedSamplingRateForUnityMicrophone", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::SamplingRate>(this, ___internal_method, requested);
}
inline ::POpusCodec::Enums::SamplingRate Photon::Voice::Unity::Recorder::GetSupportedSamplingRate(::POpusCodec::Enums::SamplingRate  requested, int32_t  minFreq, int32_t  maxFreq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetSupportedSamplingRate", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::SamplingRate>(this, ___internal_method, requested, minFreq, maxFreq);
}
inline ::POpusCodec::Enums::SamplingRate Photon::Voice::Unity::Recorder::GetSupportedSamplingRate(::POpusCodec::Enums::SamplingRate  sR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetSupportedSamplingRate", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::POpusCodec::Enums::SamplingRate>(this, ___internal_method, sR);
}
inline void Photon::Voice::Unity::Recorder::CheckAndSetSamplingRate(::POpusCodec::Enums::SamplingRate  sR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckAndSetSamplingRate", {}, {::i2c::type_of<::POpusCodec::Enums::SamplingRate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sR);
}
inline void Photon::Voice::Unity::Recorder::CheckAndSetSamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckAndSetSamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::StopRecordingInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"StopRecordingInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::CheckAndAutoStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckAndAutoStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder::CheckAndAutoStart(bool  autoStartFlag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckAndAutoStart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autoStartFlag);
}
inline void Photon::Voice::Unity::Recorder::StartRecordingInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"StartRecordingInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::IDeviceEnumerator* Photon::Voice::Unity::Recorder::GetMicrophonesEnumerator(::GlobalNamespace::Recorder_MicType  micType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetMicrophonesEnumerator", {}, {::i2c::type_of<::GlobalNamespace::Recorder_MicType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IDeviceEnumerator*>(this, ___internal_method, micType);
}
inline ::Photon::Voice::DeviceInfo Photon::Voice::Unity::Recorder::GetDeviceById(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetDeviceById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::DeviceInfo>(this, ___internal_method, id);
}
inline ::Photon::Voice::DeviceInfo Photon::Voice::Unity::Recorder::GetDeviceById(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"GetDeviceById", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::DeviceInfo>(this, ___internal_method, id);
}
inline bool Photon::Voice::Unity::Recorder::CheckIfThereIsAtLeastOneMic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CheckIfThereIsAtLeastOneMic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Photon::Voice::IDeviceEnumerator* Photon::Voice::Unity::Recorder::CreatePhotonDeviceEnumerator(::Photon::Voice::Unity::VoiceLogger*  voiceLogger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {"CreatePhotonDeviceEnumerator", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceLogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::IDeviceEnumerator*>(nullptr, ___internal_method, voiceLogger);
}
inline void Photon::Voice::Unity::Recorder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::Recorder* Photon::Voice::Unity::Recorder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::Recorder*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::Recorder::Recorder()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder___c__DisplayClass179_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder___c__DisplayClass179_0::*)()>(&::Photon::Voice::Unity::Recorder___c__DisplayClass179_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76cc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder___c__DisplayClass179_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder___c__DisplayClass179_0._VoiceDetectorCalibrate_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder___c__DisplayClass179_0::*)(float_t)>(&::Photon::Voice::Unity::Recorder___c__DisplayClass179_0::_VoiceDetectorCalibrate_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa771714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder___c__DisplayClass179_0*>(),
                        {"<VoiceDetectorCalibrate>b__0", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& Photon::Voice::Unity::Recorder___c__DisplayClass179_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& Photon::Voice::Unity::Recorder___c__DisplayClass179_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Voice::Unity::Recorder___c__DisplayClass179_0::__cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action_1<float_t>*& Photon::Voice::Unity::Recorder___c__DisplayClass179_0::__cordl_internal_get_detectionEndedCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detectionEndedCallback;
}
constexpr ::System::Action_1<float_t>* const& Photon::Voice::Unity::Recorder___c__DisplayClass179_0::__cordl_internal_get_detectionEndedCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detectionEndedCallback;
}
constexpr void Photon::Voice::Unity::Recorder___c__DisplayClass179_0::__cordl_internal_set_detectionEndedCallback(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detectionEndedCallback = value;
}
inline void Photon::Voice::Unity::Recorder___c__DisplayClass179_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder___c__DisplayClass179_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::Recorder___c__DisplayClass179_0::_VoiceDetectorCalibrate_b__0(float_t  newThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder___c__DisplayClass179_0*>(),
                        {"<VoiceDetectorCalibrate>b__0", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newThreshold);
}
inline ::Photon::Voice::Unity::Recorder___c__DisplayClass179_0* Photon::Voice::Unity::Recorder___c__DisplayClass179_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::Recorder___c__DisplayClass179_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::Recorder___c__DisplayClass179_0::Recorder___c__DisplayClass179_0()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams::*)()>(&::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77170c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams* Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams::Recorder_PhotonVoiceCreatedParams()   {
}
