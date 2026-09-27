#pragma once
// IWYU pragma private; include "Photon/Voice/VoiceClient.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Enumerator_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__AudioSampleType_def.hpp"
#include "Photon/Voice/zzzz__Codec_def.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IEncoder_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
#include "Photon/Voice/zzzz__IVoiceTransport_def.hpp"
#include "Photon/Voice/zzzz__LocalVoiceAudio_1_def.hpp"
#include "Photon/Voice/zzzz__LocalVoiceFramed_1_def.hpp"
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
#include "Photon/Voice/zzzz__RemoteVoiceInfo_def.hpp"
#include "Photon/Voice/zzzz__RemoteVoiceOptions_def.hpp"
#include "Photon/Voice/zzzz__RemoteVoice_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_CreateOptions_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_FramesLost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_FramesLost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_FramesLost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.set_FramesLost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::set_FramesLost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_FramesLost", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_FramesReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_FramesReceived)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_FramesReceived", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.set_FramesReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::set_FramesReceived)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_FramesReceived", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_FramesSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_FramesSent)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa74c578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_FramesSent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_FramesSentBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_FramesSentBytes)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa74c6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_FramesSentBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_RoundTripTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_RoundTripTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_RoundTripTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.set_RoundTripTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::set_RoundTripTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_RoundTripTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_RoundTripTimeVariance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_RoundTripTimeVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_RoundTripTimeVariance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.set_RoundTripTimeVariance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::set_RoundTripTimeVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_RoundTripTimeVariance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_SuppressInfoDuplicateWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_SuppressInfoDuplicateWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_SuppressInfoDuplicateWarning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.set_SuppressInfoDuplicateWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(bool)>(&::Photon::Voice::VoiceClient::set_SuppressInfoDuplicateWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_SuppressInfoDuplicateWarning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_OnRemoteVoiceInfoAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate* (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_OnRemoteVoiceInfoAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_OnRemoteVoiceInfoAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.set_OnRemoteVoiceInfoAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*)>(&::Photon::Voice::VoiceClient::set_OnRemoteVoiceInfoAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_OnRemoteVoiceInfoAction", {}, {::i2c::type_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_DebugLostPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_DebugLostPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_DebugLostPercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.set_DebugLostPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::set_DebugLostPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74c858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_DebugLostPercent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_LocalVoices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>* (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_LocalVoices)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa74c860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_LocalVoices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.LocalVoicesInChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>* (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::LocalVoicesInChannel)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa74c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"LocalVoicesInChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_RemoteVoiceInfos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>* (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_RemoteVoiceInfos)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa74ca28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_RemoteVoiceInfos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.LogSpacingProfiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::LogSpacingProfiles)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0xa74cadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"LogSpacingProfiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.LogStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::LogStats)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xa74d0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"LogStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.SetRemoteVoiceDelayFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(::Photon::Voice::Codec, int32_t)>(&::Photon::Voice::VoiceClient::SetRemoteVoiceDelayFrames)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa74d5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"SetRemoteVoiceDelayFrames", {}, {::i2c::type_of<::Photon::Voice::Codec>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(::Photon::Voice::IVoiceTransport*, ::Photon::Voice::ILogger*, ::GlobalNamespace::VoiceClient_CreateOptions)>(&::Photon::Voice::VoiceClient::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xa74d870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::IVoiceTransport*>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::GlobalNamespace::VoiceClient_CreateOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.Service
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::Service)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa74dae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"Service", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.createLocalVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::LocalVoice* (::Photon::Voice::VoiceClient::*)(int32_t, ::System::Func_3<uint8_t,int32_t,::Photon::Voice::LocalVoice*>*)>(&::Photon::Voice::VoiceClient::createLocalVoice)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa74dc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"createLocalVoice", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_3<uint8_t,int32_t,::Photon::Voice::LocalVoice*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.CreateLocalVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::LocalVoice* (::Photon::Voice::VoiceClient::*)(::Photon::Voice::VoiceInfo, int32_t, ::Photon::Voice::IEncoder*)>(&::Photon::Voice::VoiceClient::CreateLocalVoice)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa74e80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"CreateLocalVoice", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::IEncoder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.CreateLocalVoiceAudioFromSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::LocalVoice* (::Photon::Voice::VoiceClient::*)(::Photon::Voice::VoiceInfo, ::Photon::Voice::IAudioDesc*, ::Photon::Voice::AudioSampleType, ::Photon::Voice::IEncoder*, int32_t)>(&::Photon::Voice::VoiceClient::CreateLocalVoiceAudioFromSource)> {
  constexpr static std::size_t size = 0xdd4;
  constexpr static std::size_t addrs = 0xa74e918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"CreateLocalVoiceAudioFromSource", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::IAudioDesc*>(), ::i2c::type_of<::Photon::Voice::AudioSampleType>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.idInc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::VoiceClient::*)(uint8_t)>(&::Photon::Voice::VoiceClient::idInc)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa74f8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"idInc", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.getNewVoiceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::getNewVoiceId)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa74de0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"getNewVoiceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.addVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(uint8_t, int32_t, ::Photon::Voice::LocalVoice*)>(&::Photon::Voice::VoiceClient::addVoice)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xa74e01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"addVoice", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.RemoveLocalVoice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(::Photon::Voice::LocalVoice*)>(&::Photon::Voice::VoiceClient::RemoveLocalVoice)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa74a27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"RemoveLocalVoice", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.sendChannelVoicesInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t, int32_t)>(&::Photon::Voice::VoiceClient::sendChannelVoicesInfo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa74f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"sendChannelVoicesInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.sendVoicesInfoAndConfigFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*, int32_t, int32_t)>(&::Photon::Voice::VoiceClient::sendVoicesInfoAndConfigFrame)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0xa748c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"sendVoicesInfoAndConfigFrame", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.get_GlobalInterestGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::get_GlobalInterestGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74f9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_GlobalInterestGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.set_GlobalInterestGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(uint8_t)>(&::Photon::Voice::VoiceClient::set_GlobalInterestGroup)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa74f9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_GlobalInterestGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.clearRemoteVoices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::clearRemoteVoices)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xa74fb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"clearRemoteVoices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.clearRemoteVoicesInChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::clearRemoteVoicesInChannel)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0xa74ff14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"clearRemoteVoicesInChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.clearRemoteVoicesInChannelForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t, int32_t)>(&::Photon::Voice::VoiceClient::clearRemoteVoicesInChannelForPlayer)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa750534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"clearRemoteVoicesInChannelForPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.onJoinChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::onJoinChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7508cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onJoinChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.onLeaveChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::onLeaveChannel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7508d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onLeaveChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.onLeaveAllChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::onLeaveAllChannels)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7508d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onLeaveAllChannels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.onPlayerJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t, int32_t)>(&::Photon::Voice::VoiceClient::onPlayerJoin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7508dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onPlayerJoin", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.onPlayerLeave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t, int32_t)>(&::Photon::Voice::VoiceClient::onPlayerLeave)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7508e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onPlayerLeave", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.onVoiceInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t, int32_t, uint8_t, uint8_t, ::Photon::Voice::VoiceInfo)>(&::Photon::Voice::VoiceClient::onVoiceInfo)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0xa7508e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onVoiceInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.onVoiceRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t, int32_t, ::ArrayW<uint8_t>)>(&::Photon::Voice::VoiceClient::onVoiceRemove)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0xa751260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onVoiceRemove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.onFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)(int32_t, int32_t, uint8_t, uint8_t, ::by_ref<::Photon::Voice::FrameBuffer>, bool)>(&::Photon::Voice::VoiceClient::onFrame)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0xa751a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::Photon::Voice::FrameBuffer>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.channelStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::channelStr)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa7496a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"channelStr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.playerStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::VoiceClient::*)(int32_t)>(&::Photon::Voice::VoiceClient::playerStr)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa751154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"playerStr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient::*)()>(&::Photon::Voice::VoiceClient::Dispose)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xa752124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::IVoiceTransport*& Photon::Voice::VoiceClient::__cordl_internal_get_transport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr ::Photon::Voice::IVoiceTransport* const& Photon::Voice::VoiceClient::__cordl_internal_get_transport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transport;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_transport(::Photon::Voice::IVoiceTransport*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transport = value;
}
constexpr ::Photon::Voice::ILogger*& Photon::Voice::VoiceClient::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::ILogger* const& Photon::Voice::VoiceClient::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_logger(::Photon::Voice::ILogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr int32_t& Photon::Voice::VoiceClient::__cordl_internal_get__FramesLost_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesLost_k__BackingField;
}
constexpr int32_t const& Photon::Voice::VoiceClient::__cordl_internal_get__FramesLost_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesLost_k__BackingField;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set__FramesLost_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FramesLost_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::VoiceClient::__cordl_internal_get__FramesReceived_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesReceived_k__BackingField;
}
constexpr int32_t const& Photon::Voice::VoiceClient::__cordl_internal_get__FramesReceived_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesReceived_k__BackingField;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set__FramesReceived_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FramesReceived_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::VoiceClient::__cordl_internal_get__RoundTripTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoundTripTime_k__BackingField;
}
constexpr int32_t const& Photon::Voice::VoiceClient::__cordl_internal_get__RoundTripTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoundTripTime_k__BackingField;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set__RoundTripTime_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoundTripTime_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::VoiceClient::__cordl_internal_get__RoundTripTimeVariance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoundTripTimeVariance_k__BackingField;
}
constexpr int32_t const& Photon::Voice::VoiceClient::__cordl_internal_get__RoundTripTimeVariance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoundTripTimeVariance_k__BackingField;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set__RoundTripTimeVariance_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoundTripTimeVariance_k__BackingField = value;
}
constexpr bool& Photon::Voice::VoiceClient::__cordl_internal_get__SuppressInfoDuplicateWarning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressInfoDuplicateWarning_k__BackingField;
}
constexpr bool const& Photon::Voice::VoiceClient::__cordl_internal_get__SuppressInfoDuplicateWarning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressInfoDuplicateWarning_k__BackingField;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set__SuppressInfoDuplicateWarning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SuppressInfoDuplicateWarning_k__BackingField = value;
}
constexpr ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*& Photon::Voice::VoiceClient::__cordl_internal_get__OnRemoteVoiceInfoAction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnRemoteVoiceInfoAction_k__BackingField;
}
constexpr ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate* const& Photon::Voice::VoiceClient::__cordl_internal_get__OnRemoteVoiceInfoAction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnRemoteVoiceInfoAction_k__BackingField;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set__OnRemoteVoiceInfoAction_k__BackingField(::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnRemoteVoiceInfoAction_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::VoiceClient::__cordl_internal_get__DebugLostPercent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugLostPercent_k__BackingField;
}
constexpr int32_t const& Photon::Voice::VoiceClient::__cordl_internal_get__DebugLostPercent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugLostPercent_k__BackingField;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set__DebugLostPercent_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DebugLostPercent_k__BackingField = value;
}
constexpr int32_t& Photon::Voice::VoiceClient::__cordl_internal_get_prevRtt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevRtt;
}
constexpr int32_t const& Photon::Voice::VoiceClient::__cordl_internal_get_prevRtt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevRtt;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_prevRtt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevRtt = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Photon::Voice::Codec,int32_t>*& Photon::Voice::VoiceClient::__cordl_internal_get_remoteVoiceDelayFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoiceDelayFrames;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Photon::Voice::Codec,int32_t>* const& Photon::Voice::VoiceClient::__cordl_internal_get_remoteVoiceDelayFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoiceDelayFrames;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_remoteVoiceDelayFrames(::System::Collections::Generic::Dictionary_2<::Photon::Voice::Codec,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteVoiceDelayFrames = value;
}
constexpr uint8_t& Photon::Voice::VoiceClient::__cordl_internal_get_voiceIDMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceIDMin;
}
constexpr uint8_t const& Photon::Voice::VoiceClient::__cordl_internal_get_voiceIDMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceIDMin;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_voiceIDMin(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceIDMin = value;
}
constexpr uint8_t& Photon::Voice::VoiceClient::__cordl_internal_get_voiceIDMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceIDMax;
}
constexpr uint8_t const& Photon::Voice::VoiceClient::__cordl_internal_get_voiceIDMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceIDMax;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_voiceIDMax(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceIDMax = value;
}
constexpr uint8_t& Photon::Voice::VoiceClient::__cordl_internal_get_voiceIdLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceIdLast;
}
constexpr uint8_t const& Photon::Voice::VoiceClient::__cordl_internal_get_voiceIdLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceIdLast;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_voiceIdLast(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceIdLast = value;
}
constexpr uint8_t& Photon::Voice::VoiceClient::__cordl_internal_get_globalInterestGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalInterestGroup;
}
constexpr uint8_t const& Photon::Voice::VoiceClient::__cordl_internal_get_globalInterestGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalInterestGroup;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_globalInterestGroup(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalInterestGroup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::LocalVoice*>*& Photon::Voice::VoiceClient::__cordl_internal_get_localVoices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoices;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::LocalVoice*>* const& Photon::Voice::VoiceClient::__cordl_internal_get_localVoices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoices;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_localVoices(::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::LocalVoice*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVoices = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Photon::Voice::LocalVoice*>*>*& Photon::Voice::VoiceClient::__cordl_internal_get_localVoicesPerChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoicesPerChannel;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Photon::Voice::LocalVoice*>*>* const& Photon::Voice::VoiceClient::__cordl_internal_get_localVoicesPerChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoicesPerChannel;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_localVoicesPerChannel(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::Photon::Voice::LocalVoice*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVoicesPerChannel = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>*& Photon::Voice::VoiceClient::__cordl_internal_get_remoteVoices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoices;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>* const& Photon::Voice::VoiceClient::__cordl_internal_get_remoteVoices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoices;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_remoteVoices(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteVoices = value;
}
constexpr ::System::Random*& Photon::Voice::VoiceClient::__cordl_internal_get_rnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnd;
}
constexpr ::System::Random* const& Photon::Voice::VoiceClient::__cordl_internal_get_rnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnd;
}
constexpr void Photon::Voice::VoiceClient::__cordl_internal_set_rnd(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rnd = value;
}
inline int32_t Photon::Voice::VoiceClient::get_FramesLost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_FramesLost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::set_FramesLost(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_FramesLost", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceClient::get_FramesReceived()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_FramesReceived", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::set_FramesReceived(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_FramesReceived", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceClient::get_FramesSent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_FramesSent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::VoiceClient::get_FramesSentBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_FramesSentBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::VoiceClient::get_RoundTripTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_RoundTripTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::set_RoundTripTime(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_RoundTripTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceClient::get_RoundTripTimeVariance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_RoundTripTimeVariance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::set_RoundTripTimeVariance(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_RoundTripTimeVariance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::VoiceClient::get_SuppressInfoDuplicateWarning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_SuppressInfoDuplicateWarning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::set_SuppressInfoDuplicateWarning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_SuppressInfoDuplicateWarning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate* Photon::Voice::VoiceClient::get_OnRemoteVoiceInfoAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_OnRemoteVoiceInfoAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::set_OnRemoteVoiceInfoAction(::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_OnRemoteVoiceInfoAction", {}, {::i2c::type_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::VoiceClient::get_DebugLostPercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_DebugLostPercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::set_DebugLostPercent(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_DebugLostPercent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>* Photon::Voice::VoiceClient::get_LocalVoices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_LocalVoices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>* Photon::Voice::VoiceClient::LocalVoicesInChannel(int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"LocalVoicesInChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*>(this, ___internal_method, channelId);
}
inline ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>* Photon::Voice::VoiceClient::get_RemoteVoiceInfos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_RemoteVoiceInfos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>*>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::LogSpacingProfiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"LogSpacingProfiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::LogStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"LogStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::SetRemoteVoiceDelayFrames(::Photon::Voice::Codec  codec, int32_t  delayFrames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"SetRemoteVoiceDelayFrames", {}, {::i2c::type_of<::Photon::Voice::Codec>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codec, delayFrames);
}
inline void Photon::Voice::VoiceClient::_ctor(::Photon::Voice::IVoiceTransport*  transport, ::Photon::Voice::ILogger*  logger, ::GlobalNamespace::VoiceClient_CreateOptions  opt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::IVoiceTransport*>(), ::i2c::type_of<::Photon::Voice::ILogger*>(), ::i2c::type_of<::GlobalNamespace::VoiceClient_CreateOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transport, logger, opt);
}
inline void Photon::Voice::VoiceClient::Service()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"Service", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::LocalVoice* Photon::Voice::VoiceClient::createLocalVoice(int32_t  channelId, ::System::Func_3<uint8_t,int32_t,::Photon::Voice::LocalVoice*>*  voiceFactory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"createLocalVoice", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_3<uint8_t,int32_t,::Photon::Voice::LocalVoice*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoice*>(this, ___internal_method, channelId, voiceFactory);
}
inline ::Photon::Voice::LocalVoice* Photon::Voice::VoiceClient::CreateLocalVoice(::Photon::Voice::VoiceInfo  voiceInfo, int32_t  channelId, ::Photon::Voice::IEncoder*  encoder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"CreateLocalVoice", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::IEncoder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoice*>(this, ___internal_method, voiceInfo, channelId, encoder);
}
template<typename T>
inline ::Photon::Voice::LocalVoiceFramed_1<T>* Photon::Voice::VoiceClient::CreateLocalVoiceFramed(::Photon::Voice::VoiceInfo  voiceInfo, int32_t  frameSize, int32_t  channelId, ::Photon::Voice::IEncoder*  encoder)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                    {"CreateLocalVoiceFramed", {::i2c::class_of<T>()}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::IEncoder*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoiceFramed_1<T>*>(this, ___internal_method, voiceInfo, frameSize, channelId, encoder);
}
template<typename T>
inline ::Photon::Voice::LocalVoiceAudio_1<T>* Photon::Voice::VoiceClient::CreateLocalVoiceAudio(::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, ::Photon::Voice::IEncoder*  encoder, int32_t  channelId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                    {"CreateLocalVoiceAudio", {::i2c::class_of<T>()}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::IAudioDesc*>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoiceAudio_1<T>*>(this, ___internal_method, voiceInfo, audioSourceDesc, encoder, channelId);
}
inline ::Photon::Voice::LocalVoice* Photon::Voice::VoiceClient::CreateLocalVoiceAudioFromSource(::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  source, ::Photon::Voice::AudioSampleType  sampleType, ::Photon::Voice::IEncoder*  encoder, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"CreateLocalVoiceAudioFromSource", {}, {::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::Photon::Voice::IAudioDesc*>(), ::i2c::type_of<::Photon::Voice::AudioSampleType>(), ::i2c::type_of<::Photon::Voice::IEncoder*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoice*>(this, ___internal_method, voiceInfo, source, sampleType, encoder, channelId);
}
inline uint8_t Photon::Voice::VoiceClient::idInc(uint8_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"idInc", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, id);
}
inline uint8_t Photon::Voice::VoiceClient::getNewVoiceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"getNewVoiceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::addVoice(uint8_t  newId, int32_t  channelId, ::Photon::Voice::LocalVoice*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"addVoice", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newId, channelId, v);
}
inline void Photon::Voice::VoiceClient::RemoveLocalVoice(::Photon::Voice::LocalVoice*  voice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"RemoveLocalVoice", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voice);
}
inline void Photon::Voice::VoiceClient::sendChannelVoicesInfo(int32_t  channelId, int32_t  targetPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"sendChannelVoicesInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, targetPlayerId);
}
inline void Photon::Voice::VoiceClient::sendVoicesInfoAndConfigFrame(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*  voiceList, int32_t  channelId, int32_t  targetPlayerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"sendVoicesInfoAndConfigFrame", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceList, channelId, targetPlayerId);
}
inline uint8_t Photon::Voice::VoiceClient::get_GlobalInterestGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"get_GlobalInterestGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::set_GlobalInterestGroup(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"set_GlobalInterestGroup", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::VoiceClient::clearRemoteVoices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"clearRemoteVoices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::clearRemoteVoicesInChannel(int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"clearRemoteVoicesInChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId);
}
inline void Photon::Voice::VoiceClient::clearRemoteVoicesInChannelForPlayer(int32_t  channelId, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"clearRemoteVoicesInChannelForPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId);
}
inline void Photon::Voice::VoiceClient::onJoinChannel(int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onJoinChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel);
}
inline void Photon::Voice::VoiceClient::onLeaveChannel(int32_t  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onLeaveChannel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel);
}
inline void Photon::Voice::VoiceClient::onLeaveAllChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onLeaveAllChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient::onPlayerJoin(int32_t  channelId, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onPlayerJoin", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId);
}
inline void Photon::Voice::VoiceClient::onPlayerLeave(int32_t  channelId, int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onPlayerLeave", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId);
}
inline void Photon::Voice::VoiceClient::onVoiceInfo(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, uint8_t  eventNumber, ::Photon::Voice::VoiceInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onVoiceInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId, voiceId, eventNumber, info);
}
inline void Photon::Voice::VoiceClient::onVoiceRemove(int32_t  channelId, int32_t  playerId, ::ArrayW<uint8_t>  voiceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onVoiceRemove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId, voiceIds);
}
inline void Photon::Voice::VoiceClient::onFrame(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, uint8_t  evNumber, ::by_ref<::Photon::Voice::FrameBuffer>  receivedBytes, bool  isLocalPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"onFrame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::Photon::Voice::FrameBuffer>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId, voiceId, evNumber, receivedBytes, isLocalPlayer);
}
inline ::StringW Photon::Voice::VoiceClient::channelStr(int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"channelStr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, channelId);
}
inline ::StringW Photon::Voice::VoiceClient::playerStr(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"playerStr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, playerId);
}
inline void Photon::Voice::VoiceClient::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::VoiceClient* Photon::Voice::VoiceClient::New_ctor(::Photon::Voice::IVoiceTransport*  transport, ::Photon::Voice::ILogger*  logger, ::GlobalNamespace::VoiceClient_CreateOptions  opt)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient*>(transport, logger, opt));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::VoiceClient::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::VoiceClient::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceClient::VoiceClient()   {
}
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)(int32_t)>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa74caa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)()>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa752a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)()>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::MoveNext)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa752af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)()>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa752ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40.__m__Finally2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)()>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__m__Finally2)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa752ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40.System_Collections_Generic_IEnumerator_Photon_Voice_RemoteVoiceInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::RemoteVoiceInfo* (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)()>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_Generic_IEnumerator_Photon_Voice_RemoteVoiceInfo__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa752f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)()>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa752f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)()>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa752f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40.System_Collections_Generic_IEnumerable_Photon_Voice_RemoteVoiceInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>* (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)()>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_Generic_IEnumerable_Photon_Voice_RemoteVoiceInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa752f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::*)()>(&::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa75302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Photon::Voice::RemoteVoiceInfo*& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Photon::Voice::RemoteVoiceInfo* const& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_set___2__current(::Photon::Voice::RemoteVoiceInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_set___4__this(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*> const& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_set___7__wrap1(::GlobalNamespace::Dictionary_2_Enumerator<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get__playerVoices_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerVoices_5__3;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*> const& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get__playerVoices_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerVoices_5__3;
}
constexpr void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_set__playerVoices_5__3(::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Voice::RemoteVoice*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerVoices_5__3 = value;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<uint8_t,::Photon::Voice::RemoteVoice*>& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___7__wrap3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap3;
}
constexpr ::GlobalNamespace::Dictionary_2_Enumerator<uint8_t,::Photon::Voice::RemoteVoice*> const& Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_get___7__wrap3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap3;
}
constexpr void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__cordl_internal_set___7__wrap3(::GlobalNamespace::Dictionary_2_Enumerator<uint8_t,::Photon::Voice::RemoteVoice*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap3 = value;
}
inline void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::RemoteVoiceInfo* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_Generic_IEnumerator_Photon_Voice_RemoteVoiceInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.Generic.IEnumerator<Photon.Voice.RemoteVoiceInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::RemoteVoiceInfo*>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_Generic_IEnumerable_Photon_Voice_RemoteVoiceInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.Generic.IEnumerable<Photon.Voice.RemoteVoiceInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>"
constexpr  Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::operator ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::i___System__Collections__Generic__IEnumerable_1___Photon__Voice__RemoteVoiceInfo__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Photon::Voice::RemoteVoiceInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>"
constexpr  Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::operator ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::i___System__Collections__Generic__IEnumerator_1___Photon__Voice__RemoteVoiceInfo__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Photon::Voice::RemoteVoiceInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceClient__get_RemoteVoiceInfos_d__40::VoiceClient__get_RemoteVoiceInfos_d__40()   {
}
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass52_3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c__DisplayClass52_3::*)()>(&::Photon::Voice::VoiceClient___c__DisplayClass52_3::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74f704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_3*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass52_3._CreateLocalVoiceAudioFromSource_b__3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c__DisplayClass52_3::*)(::ArrayW<int16_t>)>(&::Photon::Voice::VoiceClient___c__DisplayClass52_3::_CreateLocalVoiceAudioFromSource_b__3)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa7529f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_3*>(),
                        {"<CreateLocalVoiceAudioFromSource>b__3", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::LocalVoiceAudio_1<int16_t>*& Photon::Voice::VoiceClient___c__DisplayClass52_3::__cordl_internal_get_localVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr ::Photon::Voice::LocalVoiceAudio_1<int16_t>* const& Photon::Voice::VoiceClient___c__DisplayClass52_3::__cordl_internal_get_localVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr void Photon::Voice::VoiceClient___c__DisplayClass52_3::__cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudio_1<int16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVoice = value;
}
inline void Photon::Voice::VoiceClient___c__DisplayClass52_3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_3*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient___c__DisplayClass52_3::_CreateLocalVoiceAudioFromSource_b__3(::ArrayW<int16_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_3*>(),
                        {"<CreateLocalVoiceAudioFromSource>b__3", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::Photon::Voice::VoiceClient___c__DisplayClass52_3* Photon::Voice::VoiceClient___c__DisplayClass52_3::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient___c__DisplayClass52_3*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceClient___c__DisplayClass52_3::VoiceClient___c__DisplayClass52_3()   {
}
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass52_2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c__DisplayClass52_2::*)()>(&::Photon::Voice::VoiceClient___c__DisplayClass52_2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74f6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass52_2._CreateLocalVoiceAudioFromSource_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c__DisplayClass52_2::*)(::ArrayW<int16_t>)>(&::Photon::Voice::VoiceClient___c__DisplayClass52_2::_CreateLocalVoiceAudioFromSource_b__2)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa752948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_2*>(),
                        {"<CreateLocalVoiceAudioFromSource>b__2", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::LocalVoiceAudio_1<float_t>*& Photon::Voice::VoiceClient___c__DisplayClass52_2::__cordl_internal_get_localVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr ::Photon::Voice::LocalVoiceAudio_1<float_t>* const& Photon::Voice::VoiceClient___c__DisplayClass52_2::__cordl_internal_get_localVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr void Photon::Voice::VoiceClient___c__DisplayClass52_2::__cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudio_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVoice = value;
}
inline void Photon::Voice::VoiceClient___c__DisplayClass52_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient___c__DisplayClass52_2::_CreateLocalVoiceAudioFromSource_b__2(::ArrayW<int16_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_2*>(),
                        {"<CreateLocalVoiceAudioFromSource>b__2", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::Photon::Voice::VoiceClient___c__DisplayClass52_2* Photon::Voice::VoiceClient___c__DisplayClass52_2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient___c__DisplayClass52_2*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceClient___c__DisplayClass52_2::VoiceClient___c__DisplayClass52_2()   {
}
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass52_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c__DisplayClass52_1::*)()>(&::Photon::Voice::VoiceClient___c__DisplayClass52_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74f6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass52_1._CreateLocalVoiceAudioFromSource_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c__DisplayClass52_1::*)(::ArrayW<float_t>)>(&::Photon::Voice::VoiceClient___c__DisplayClass52_1::_CreateLocalVoiceAudioFromSource_b__1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa7528f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_1*>(),
                        {"<CreateLocalVoiceAudioFromSource>b__1", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::LocalVoiceAudio_1<float_t>*& Photon::Voice::VoiceClient___c__DisplayClass52_1::__cordl_internal_get_localVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr ::Photon::Voice::LocalVoiceAudio_1<float_t>* const& Photon::Voice::VoiceClient___c__DisplayClass52_1::__cordl_internal_get_localVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr void Photon::Voice::VoiceClient___c__DisplayClass52_1::__cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudio_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVoice = value;
}
inline void Photon::Voice::VoiceClient___c__DisplayClass52_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient___c__DisplayClass52_1::_CreateLocalVoiceAudioFromSource_b__1(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_1*>(),
                        {"<CreateLocalVoiceAudioFromSource>b__1", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::Photon::Voice::VoiceClient___c__DisplayClass52_1* Photon::Voice::VoiceClient___c__DisplayClass52_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient___c__DisplayClass52_1*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceClient___c__DisplayClass52_1::VoiceClient___c__DisplayClass52_1()   {
}
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass52_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c__DisplayClass52_0::*)()>(&::Photon::Voice::VoiceClient___c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74f6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass52_0._CreateLocalVoiceAudioFromSource_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c__DisplayClass52_0::*)(::ArrayW<float_t>)>(&::Photon::Voice::VoiceClient___c__DisplayClass52_0::_CreateLocalVoiceAudioFromSource_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa752844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_0*>(),
                        {"<CreateLocalVoiceAudioFromSource>b__0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::LocalVoiceAudio_1<int16_t>*& Photon::Voice::VoiceClient___c__DisplayClass52_0::__cordl_internal_get_localVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr ::Photon::Voice::LocalVoiceAudio_1<int16_t>* const& Photon::Voice::VoiceClient___c__DisplayClass52_0::__cordl_internal_get_localVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVoice;
}
constexpr void Photon::Voice::VoiceClient___c__DisplayClass52_0::__cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudio_1<int16_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVoice = value;
}
inline void Photon::Voice::VoiceClient___c__DisplayClass52_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::VoiceClient___c__DisplayClass52_0::_CreateLocalVoiceAudioFromSource_b__0(::ArrayW<float_t>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass52_0*>(),
                        {"<CreateLocalVoiceAudioFromSource>b__0", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf);
}
inline ::Photon::Voice::VoiceClient___c__DisplayClass52_0* Photon::Voice::VoiceClient___c__DisplayClass52_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient___c__DisplayClass52_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceClient___c__DisplayClass52_0::VoiceClient___c__DisplayClass52_0()   {
}
template<typename T>
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_set___4__this(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::Photon::Voice::IEncoder*& Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_get_encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
template<typename T>
constexpr ::Photon::Voice::IEncoder* const& Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_get_encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
template<typename T>
constexpr void Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_set_encoder(::Photon::Voice::IEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoder = value;
}
template<typename T>
constexpr ::Photon::Voice::VoiceInfo& Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_get_voiceInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceInfo;
}
template<typename T>
constexpr ::Photon::Voice::VoiceInfo const& Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_get_voiceInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceInfo;
}
template<typename T>
constexpr void Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_set_voiceInfo(::Photon::Voice::VoiceInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceInfo = value;
}
template<typename T>
constexpr ::Photon::Voice::IAudioDesc*& Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_get_audioSourceDesc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceDesc;
}
template<typename T>
constexpr ::Photon::Voice::IAudioDesc* const& Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_get_audioSourceDesc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceDesc;
}
template<typename T>
constexpr void Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::__cordl_internal_set_audioSourceDesc(::Photon::Voice::IAudioDesc*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSourceDesc = value;
}
template<typename T>
inline void Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::LocalVoice* Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::_CreateLocalVoiceAudio_b__0(uint8_t  vId, int32_t  chId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>*>(),
                        {"<CreateLocalVoiceAudio>b__0", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoice*>(this, ___internal_method, vId, chId);
}
template<typename T>
inline ::Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>* Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::VoiceClient___c__DisplayClass51_0_1<T>::VoiceClient___c__DisplayClass51_0_1()   {
}
template<typename T>
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_set___4__this(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::Photon::Voice::IEncoder*& Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_get_encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
template<typename T>
constexpr ::Photon::Voice::IEncoder* const& Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_get_encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
template<typename T>
constexpr void Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_set_encoder(::Photon::Voice::IEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoder = value;
}
template<typename T>
constexpr ::Photon::Voice::VoiceInfo& Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_get_voiceInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceInfo;
}
template<typename T>
constexpr ::Photon::Voice::VoiceInfo const& Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_get_voiceInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceInfo;
}
template<typename T>
constexpr void Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_set_voiceInfo(::Photon::Voice::VoiceInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceInfo = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_get_frameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSize;
}
template<typename T>
constexpr int32_t const& Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_get_frameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameSize;
}
template<typename T>
constexpr void Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::__cordl_internal_set_frameSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameSize = value;
}
template<typename T>
inline void Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::LocalVoice* Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::_CreateLocalVoiceFramed_b__0(uint8_t  vId, int32_t  chId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>*>(),
                        {"<CreateLocalVoiceFramed>b__0", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoice*>(this, ___internal_method, vId, chId);
}
template<typename T>
inline ::Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>* Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::VoiceClient___c__DisplayClass50_0_1<T>::VoiceClient___c__DisplayClass50_0_1()   {
}
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass49_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c__DisplayClass49_0::*)()>(&::Photon::Voice::VoiceClient___c__DisplayClass49_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74e910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass49_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c__DisplayClass49_0._CreateLocalVoice_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::LocalVoice* (::Photon::Voice::VoiceClient___c__DisplayClass49_0::*)(uint8_t, int32_t)>(&::Photon::Voice::VoiceClient___c__DisplayClass49_0::_CreateLocalVoice_b__0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa7527b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass49_0*>(),
                        {"<CreateLocalVoice>b__0", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::VoiceClient*& Photon::Voice::VoiceClient___c__DisplayClass49_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Photon::Voice::VoiceClient* const& Photon::Voice::VoiceClient___c__DisplayClass49_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Voice::VoiceClient___c__DisplayClass49_0::__cordl_internal_set___4__this(::Photon::Voice::VoiceClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Photon::Voice::IEncoder*& Photon::Voice::VoiceClient___c__DisplayClass49_0::__cordl_internal_get_encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
constexpr ::Photon::Voice::IEncoder* const& Photon::Voice::VoiceClient___c__DisplayClass49_0::__cordl_internal_get_encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoder;
}
constexpr void Photon::Voice::VoiceClient___c__DisplayClass49_0::__cordl_internal_set_encoder(::Photon::Voice::IEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoder = value;
}
constexpr ::Photon::Voice::VoiceInfo& Photon::Voice::VoiceClient___c__DisplayClass49_0::__cordl_internal_get_voiceInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceInfo;
}
constexpr ::Photon::Voice::VoiceInfo const& Photon::Voice::VoiceClient___c__DisplayClass49_0::__cordl_internal_get_voiceInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceInfo;
}
constexpr void Photon::Voice::VoiceClient___c__DisplayClass49_0::__cordl_internal_set_voiceInfo(::Photon::Voice::VoiceInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceInfo = value;
}
inline void Photon::Voice::VoiceClient___c__DisplayClass49_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass49_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::LocalVoice* Photon::Voice::VoiceClient___c__DisplayClass49_0::_CreateLocalVoice_b__0(uint8_t  vId, int32_t  chId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c__DisplayClass49_0*>(),
                        {"<CreateLocalVoice>b__0", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LocalVoice*>(this, ___internal_method, vId, chId);
}
inline ::Photon::Voice::VoiceClient___c__DisplayClass49_0* Photon::Voice::VoiceClient___c__DisplayClass49_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient___c__DisplayClass49_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceClient___c__DisplayClass49_0::VoiceClient___c__DisplayClass49_0()   {
}
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient___c::*)()>(&::Photon::Voice::VoiceClient___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa752794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient___c._sendVoicesInfoAndConfigFrame_b__61_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::VoiceClient___c::*)(::Photon::Voice::LocalVoice*)>(&::Photon::Voice::VoiceClient___c::_sendVoicesInfoAndConfigFrame_b__61_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa75279c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c*>(),
                        {"<sendVoicesInfoAndConfigFrame>b__61_0", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::VoiceClient___c::setStaticF___9(::Photon::Voice::VoiceClient___c*  value)  {
::cordl_internals::setStaticField<::Photon::Voice::VoiceClient___c*, "<>9", ::Photon::Voice::VoiceClient___c*>(std::forward<::Photon::Voice::VoiceClient___c*>(value));
}
inline ::Photon::Voice::VoiceClient___c* Photon::Voice::VoiceClient___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Voice::VoiceClient___c*, "<>9", ::Photon::Voice::VoiceClient___c*>();
}
inline void Photon::Voice::VoiceClient___c::setStaticF___9__61_0(::System::Func_2<::Photon::Voice::LocalVoice*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Photon::Voice::LocalVoice*,bool>*, "<>9__61_0", ::Photon::Voice::VoiceClient___c*>(std::forward<::System::Func_2<::Photon::Voice::LocalVoice*,bool>*>(value));
}
inline ::System::Func_2<::Photon::Voice::LocalVoice*,bool>* Photon::Voice::VoiceClient___c::getStaticF___9__61_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Photon::Voice::LocalVoice*,bool>*, "<>9__61_0", ::Photon::Voice::VoiceClient___c*>();
}
inline void Photon::Voice::VoiceClient___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::VoiceClient___c::_sendVoicesInfoAndConfigFrame_b__61_0(::Photon::Voice::LocalVoice*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient___c*>(),
                        {"<sendVoicesInfoAndConfigFrame>b__61_0", {}, {::i2c::type_of<::Photon::Voice::LocalVoice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::Photon::Voice::VoiceClient___c* Photon::Voice::VoiceClient___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient___c*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceClient___c::VoiceClient___c()   {
}
//  Writing Method size for method: ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa7524d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::*)(int32_t, int32_t, uint8_t, ::Photon::Voice::VoiceInfo, ::by_ref<::Photon::Voice::RemoteVoiceOptions>)>(&::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa752574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(),
                    {::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::*)(int32_t, int32_t, uint8_t, ::Photon::Voice::VoiceInfo, ::by_ref<::Photon::Voice::RemoteVoiceOptions>, ::System::AsyncCallback*, ::System::Object*)>(&::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa7525b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(),
                    {::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::*)(::by_ref<::Photon::Voice::RemoteVoiceOptions>, ::System::IAsyncResult*)>(&::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa7526c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(),
                    {::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::Invoke(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  voiceInfo, ::by_ref<::Photon::Voice::RemoteVoiceOptions>  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId, voiceId, voiceInfo, options);
}
inline ::System::IAsyncResult* Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::BeginInvoke(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  voiceInfo, ::by_ref<::Photon::Voice::RemoteVoiceOptions>  options, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, channelId, playerId, voiceId, voiceInfo, options, callback, object);
}
inline void Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::EndInvoke(::by_ref<::Photon::Voice::RemoteVoiceOptions>  options, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, result);
}
inline ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate* Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Photon::Voice::VoiceClient_RemoteVoiceInfoDelegate::VoiceClient_RemoteVoiceInfoDelegate()   {
}
