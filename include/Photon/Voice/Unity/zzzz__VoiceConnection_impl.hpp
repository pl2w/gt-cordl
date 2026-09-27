#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/VoiceConnection.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "Photon/Realtime/zzzz__ConnectionHandler_impl.hpp"
#include "Photon/Voice/Unity/zzzz__PlaybackDelaySettings_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "Photon/Realtime/zzzz__AppSettings_def.hpp"
#include "Photon/Realtime/zzzz__ClientState_def.hpp"
#include "Photon/Realtime/zzzz__SupportLogger_def.hpp"
#include "Photon/Voice/Unity/zzzz__ILoggable_def.hpp"
#include "Photon/Voice/Unity/zzzz__PlaybackDelaySettings_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Photon/Voice/Unity/zzzz__RemoteVoiceLink_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceLogger_def.hpp"
#include "Photon/Voice/zzzz__LoadBalancingTransport_def.hpp"
#include "Photon/Voice/zzzz__RemoteVoiceOptions_def.hpp"
#include "Photon/Voice/zzzz__VoiceClient_def.hpp"
#include "Photon/Voice/zzzz__VoiceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.add_SpeakerLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*)>(&::Photon::Voice::Unity::VoiceConnection::add_SpeakerLinked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa773d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"add_SpeakerLinked", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.remove_SpeakerLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*)>(&::Photon::Voice::Unity::VoiceConnection::remove_SpeakerLinked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa773ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"remove_SpeakerLinked", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.add_RemoteVoiceAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*)>(&::Photon::Voice::Unity::VoiceConnection::add_RemoteVoiceAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa773e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"add_RemoteVoiceAdded", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.remove_RemoteVoiceAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*)>(&::Photon::Voice::Unity::VoiceConnection::remove_RemoteVoiceAdded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa773f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"remove_RemoteVoiceAdded", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Unity::VoiceLogger* (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_Logger)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa773fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Voice::Unity::VoiceLogger*)>(&::Photon::Voice::Unity::VoiceConnection::set_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7740dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_Logger", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceLogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DebugLevel (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_LogLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa7740e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_LogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::ExitGames::Client::Photon::DebugLevel)>(&::Photon::Voice::Unity::VoiceConnection::set_LogLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa77411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_Client
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::LoadBalancingTransport* (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_Client)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa76b8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_Client", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_VoiceClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::VoiceClient* (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_VoiceClient)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa76c6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_VoiceClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_ClientState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::ClientState (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_ClientState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa774150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_ClientState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_FramesReceivedPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_FramesReceivedPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77416c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_FramesReceivedPerSecond", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_FramesReceivedPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(float_t)>(&::Photon::Voice::Unity::VoiceConnection::set_FramesReceivedPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa774174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_FramesReceivedPerSecond", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_FramesLostPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_FramesLostPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77417c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_FramesLostPerSecond", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_FramesLostPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(float_t)>(&::Photon::Voice::Unity::VoiceConnection::set_FramesLostPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa774184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_FramesLostPerSecond", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_FramesLostPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_FramesLostPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77418c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_FramesLostPercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_FramesLostPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(float_t)>(&::Photon::Voice::Unity::VoiceConnection::set_FramesLostPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa774194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_FramesLostPercent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_SpeakerPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_SpeakerPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77419c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_SpeakerPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_SpeakerPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::UnityEngine::GameObject*)>(&::Photon::Voice::Unity::VoiceConnection::set_SpeakerPrefab)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa7741a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_SpeakerPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_PrimaryRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Recorder> (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_PrimaryRecorder)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa774370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_PrimaryRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_PrimaryRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Voice::Unity::Recorder*)>(&::Photon::Voice::Unity::VoiceConnection::set_PrimaryRecorder)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa774430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_PrimaryRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_GlobalRecordersLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DebugLevel (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_GlobalRecordersLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa774450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalRecordersLogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_GlobalRecordersLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::ExitGames::Client::Photon::DebugLevel)>(&::Photon::Voice::Unity::VoiceConnection::set_GlobalRecordersLogLevel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa774458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_GlobalRecordersLogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_GlobalSpeakersLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DebugLevel (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_GlobalSpeakersLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7744f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalSpeakersLogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_GlobalSpeakersLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::ExitGames::Client::Photon::DebugLevel)>(&::Photon::Voice::Unity::VoiceConnection::set_GlobalSpeakersLogLevel)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa7744fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_GlobalSpeakersLogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_GlobalPlaybackDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_GlobalPlaybackDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa774598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalPlaybackDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_GlobalPlaybackDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(int32_t)>(&::Photon::Voice::Unity::VoiceConnection::set_GlobalPlaybackDelay)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa7745a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_GlobalPlaybackDelay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_BestRegionSummaryInPreferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_BestRegionSummaryInPreferences)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa7745b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_BestRegionSummaryInPreferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.set_BestRegionSummaryInPreferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::StringW)>(&::Photon::Voice::Unity::VoiceConnection::set_BestRegionSummaryInPreferences)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa774600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_BestRegionSummaryInPreferences", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_GlobalPlaybackDelayMinSoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_GlobalPlaybackDelayMinSoft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa774670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalPlaybackDelayMinSoft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_GlobalPlaybackDelayMaxSoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_GlobalPlaybackDelayMaxSoft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa774678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalPlaybackDelayMaxSoft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.get_GlobalPlaybackDelayMaxHard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::get_GlobalPlaybackDelayMaxHard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa774680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalPlaybackDelayMaxHard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.ConnectUsingSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Realtime::AppSettings*)>(&::Photon::Voice::Unity::VoiceConnection::ConnectUsingSettings)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xa774688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"ConnectUsingSettings", {}, {::i2c::type_of<::Photon::Realtime::AppSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.InitRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Voice::Unity::Recorder*)>(&::Photon::Voice::Unity::VoiceConnection::InitRecorder)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa774a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"InitRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.SetPlaybackDelaySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Voice::Unity::PlaybackDelaySettings)>(&::Photon::Voice::Unity::VoiceConnection::SetPlaybackDelaySettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa774c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"SetPlaybackDelaySettings", {}, {::i2c::type_of<::Photon::Voice::Unity::PlaybackDelaySettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.SetGlobalPlaybackDelaySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(int32_t, int32_t, int32_t)>(&::Photon::Voice::Unity::VoiceConnection::SetGlobalPlaybackDelaySettings)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa774c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"SetGlobalPlaybackDelaySettings", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.TryLateLinkingUsingUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Voice::Unity::Speaker*, ::System::Object*)>(&::Photon::Voice::Unity::VoiceConnection::TryLateLinkingUsingUserData)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0xa774eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::Awake)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa775bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::Update)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa775c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::FixedUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa775db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.Dispatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::Dispatch)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa775de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"Dispatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::LateUpdate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa775e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa77600c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa776320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.SimpleSpeakerFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Speaker> (::Photon::Voice::Unity::VoiceConnection::*)(int32_t, uint8_t, ::System::Object*)>(&::Photon::Voice::Unity::VoiceConnection::SimpleSpeakerFactory)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0xa776324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.DeleteVoiceOnRemoteVoiceRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Voice::Unity::Speaker*)>(&::Photon::Voice::Unity::VoiceConnection::DeleteVoiceOnRemoteVoiceRemove)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa77681c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"DeleteVoiceOnRemoteVoiceRemove", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.OnRemoteVoiceInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(int32_t, int32_t, uint8_t, ::Photon::Voice::VoiceInfo, ::by_ref<::Photon::Voice::RemoteVoiceOptions>)>(&::Photon::Voice::Unity::VoiceConnection::OnRemoteVoiceInfo)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0xa776988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"OnRemoteVoiceInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::by_ref<::Photon::Voice::RemoteVoiceOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.OnVoiceStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState)>(&::Photon::Voice::Unity::VoiceConnection::OnVoiceStateChanged)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa77701c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.CalcStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::CalcStatistics)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa775f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"CalcStatistics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.CleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::CleanUp)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa776098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"CleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.LinkSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Voice::Unity::Speaker*, ::Photon::Voice::Unity::RemoteVoiceLink*)>(&::Photon::Voice::Unity::VoiceConnection::LinkSpeaker)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0xa7756e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"LinkSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>(), ::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.ClearRemoteVoicesCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::ClearRemoteVoicesCache)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa7772d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"ClearRemoteVoicesCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.TryInitializePrimaryRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::TryInitializePrimaryRecorder)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa774394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"TryInitializePrimaryRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.AddInitializedRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Voice::Unity::Recorder*)>(&::Photon::Voice::Unity::VoiceConnection::AddInitializedRecorder)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa76c708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"AddInitializedRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.RemoveInitializedRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::Photon::Voice::Unity::Recorder*)>(&::Photon::Voice::Unity::VoiceConnection::RemoveInitializedRecorder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa76f394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"RemoveInitializedRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.StartInitializedRecorders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::StartInitializedRecorders)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa777444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"StartInitializedRecorders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.StopInitializedRecorders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::StopInitializedRecorders)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa777238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"StopInitializedRecorders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.TryGetFirstVoiceStreamByUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceConnection::*)(::System::Object*, ::by_ref<::Photon::Voice::Unity::RemoteVoiceLink*>)>(&::Photon::Voice::Unity::VoiceConnection::TryGetFirstVoiceStreamByUserData)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0xa7752cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"TryGetFirstVoiceStreamByUserData", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::Photon::Voice::Unity::RemoteVoiceLink*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection.OnOperationResponseReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Photon::Voice::Unity::VoiceConnection::OnOperationResponseReceived)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa7774d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection::*)()>(&::Photon::Voice::Unity::VoiceConnection::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa777698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Voice::Unity::VoiceLogger*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::Unity::VoiceLogger* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_logger(::Photon::Voice::Unity::VoiceLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_logLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logLevel = value;
}
constexpr ::Photon::Voice::LoadBalancingTransport*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Photon::Voice::LoadBalancingTransport* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_client(::Photon::Voice::LoadBalancingTransport*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
constexpr bool& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_enableSupportLogger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableSupportLogger;
}
constexpr bool const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_enableSupportLogger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableSupportLogger;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_enableSupportLogger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableSupportLogger = value;
}
constexpr ::UnityW<::Photon::Realtime::SupportLogger>& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_supportLoggerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportLoggerComponent;
}
constexpr ::UnityW<::Photon::Realtime::SupportLogger> const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_supportLoggerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___supportLoggerComponent;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_supportLoggerComponent(::UnityW<::Photon::Realtime::SupportLogger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___supportLoggerComponent = value;
}
constexpr int32_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_updateInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateInterval;
}
constexpr int32_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_updateInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateInterval;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_updateInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateInterval = value;
}
constexpr int32_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_nextSendTickCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSendTickCount;
}
constexpr int32_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_nextSendTickCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSendTickCount;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_nextSendTickCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSendTickCount = value;
}
constexpr int32_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_statsResetInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsResetInterval;
}
constexpr int32_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_statsResetInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsResetInterval;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_statsResetInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statsResetInterval = value;
}
constexpr int32_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_nextStatsTickCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextStatsTickCount;
}
constexpr int32_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_nextStatsTickCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextStatsTickCount;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_nextStatsTickCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextStatsTickCount = value;
}
constexpr float_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_statsReferenceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsReferenceTime;
}
constexpr float_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_statsReferenceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___statsReferenceTime;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_statsReferenceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___statsReferenceTime = value;
}
constexpr int32_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_referenceFramesLost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceFramesLost;
}
constexpr int32_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_referenceFramesLost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceFramesLost;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_referenceFramesLost(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referenceFramesLost = value;
}
constexpr int32_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_referenceFramesReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceFramesReceived;
}
constexpr int32_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_referenceFramesReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceFramesReceived;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_referenceFramesReceived(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referenceFramesReceived = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_speakerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_speakerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerPrefab;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_speakerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speakerPrefab = value;
}
constexpr bool& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_cleanedUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cleanedUp;
}
constexpr bool const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_cleanedUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cleanedUp;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_cleanedUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cleanedUp = value;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Voice::Unity::RemoteVoiceLink*>*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_cachedRemoteVoices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRemoteVoices;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Voice::Unity::RemoteVoiceLink*>* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_cachedRemoteVoices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRemoteVoices;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_cachedRemoteVoices(::System::Collections::Generic::List_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedRemoteVoices = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_primaryRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryRecorder;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_primaryRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryRecorder;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_primaryRecorder(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryRecorder = value;
}
constexpr bool& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_primaryRecorderInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryRecorderInitialized;
}
constexpr bool const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_primaryRecorderInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryRecorderInitialized;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_primaryRecorderInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryRecorderInitialized = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_globalRecordersLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRecordersLogLevel;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_globalRecordersLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalRecordersLogLevel;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_globalRecordersLogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalRecordersLogLevel = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_globalSpeakersLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalSpeakersLogLevel;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_globalSpeakersLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalSpeakersLogLevel;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_globalSpeakersLogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalSpeakersLogLevel = value;
}
constexpr int32_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_globalPlaybackDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalPlaybackDelay;
}
constexpr int32_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_globalPlaybackDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalPlaybackDelay;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_globalPlaybackDelay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalPlaybackDelay = value;
}
constexpr ::Photon::Voice::Unity::PlaybackDelaySettings& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_globalPlaybackDelaySettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalPlaybackDelaySettings;
}
constexpr ::Photon::Voice::Unity::PlaybackDelaySettings const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_globalPlaybackDelaySettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalPlaybackDelaySettings;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_globalPlaybackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalPlaybackDelaySettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_linkedSpeakers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedSpeakers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_linkedSpeakers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linkedSpeakers;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_linkedSpeakers(::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linkedSpeakers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Recorder>>*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_initializedRecorders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializedRecorders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Recorder>>* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_initializedRecorders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializedRecorders;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_initializedRecorders(::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Recorder>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initializedRecorders = value;
}
constexpr ::Photon::Realtime::AppSettings*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::Photon::Realtime::AppSettings* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_Settings(::Photon::Realtime::AppSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::System::Func_4<int32_t,uint8_t,::System::Object*,::UnityW<::Photon::Voice::Unity::Speaker>>*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_SpeakerFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeakerFactory;
}
constexpr ::System::Func_4<int32_t,uint8_t,::System::Object*,::UnityW<::Photon::Voice::Unity::Speaker>>* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_SpeakerFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeakerFactory;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_SpeakerFactory(::System::Func_4<int32_t,uint8_t,::System::Object*,::UnityW<::Photon::Voice::Unity::Speaker>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpeakerFactory = value;
}
constexpr ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_SpeakerLinked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeakerLinked;
}
constexpr ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_SpeakerLinked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpeakerLinked;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_SpeakerLinked(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpeakerLinked = value;
}
constexpr ::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_RemoteVoiceAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteVoiceAdded;
}
constexpr ::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_RemoteVoiceAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteVoiceAdded;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_RemoteVoiceAdded(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RemoteVoiceAdded = value;
}
constexpr ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_RemoteLinkValidator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteLinkValidator;
}
constexpr ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate* const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_RemoteLinkValidator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemoteLinkValidator;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_RemoteLinkValidator(::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RemoteLinkValidator = value;
}
constexpr float_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_MinimalTimeScaleToDispatchInFixedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinimalTimeScaleToDispatchInFixedUpdate;
}
constexpr float_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_MinimalTimeScaleToDispatchInFixedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinimalTimeScaleToDispatchInFixedUpdate;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_MinimalTimeScaleToDispatchInFixedUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinimalTimeScaleToDispatchInFixedUpdate = value;
}
constexpr bool& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_AutoCreateSpeakerIfNotFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoCreateSpeakerIfNotFound;
}
constexpr bool const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_AutoCreateSpeakerIfNotFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoCreateSpeakerIfNotFound;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_AutoCreateSpeakerIfNotFound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoCreateSpeakerIfNotFound = value;
}
constexpr int32_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_MaxDatagrams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDatagrams;
}
constexpr int32_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_MaxDatagrams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxDatagrams;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_MaxDatagrams(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxDatagrams = value;
}
constexpr bool& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_SendAsap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendAsap;
}
constexpr bool const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get_SendAsap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendAsap;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set_SendAsap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendAsap = value;
}
constexpr float_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get__FramesReceivedPerSecond_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesReceivedPerSecond_k__BackingField;
}
constexpr float_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get__FramesReceivedPerSecond_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesReceivedPerSecond_k__BackingField;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set__FramesReceivedPerSecond_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FramesReceivedPerSecond_k__BackingField = value;
}
constexpr float_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get__FramesLostPerSecond_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesLostPerSecond_k__BackingField;
}
constexpr float_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get__FramesLostPerSecond_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesLostPerSecond_k__BackingField;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set__FramesLostPerSecond_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FramesLostPerSecond_k__BackingField = value;
}
constexpr float_t& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get__FramesLostPercent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesLostPercent_k__BackingField;
}
constexpr float_t const& Photon::Voice::Unity::VoiceConnection::__cordl_internal_get__FramesLostPercent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FramesLostPercent_k__BackingField;
}
constexpr void Photon::Voice::Unity::VoiceConnection::__cordl_internal_set__FramesLostPercent_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FramesLostPercent_k__BackingField = value;
}
inline void Photon::Voice::Unity::VoiceConnection::add_SpeakerLinked(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"add_SpeakerLinked", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::VoiceConnection::remove_SpeakerLinked(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"remove_SpeakerLinked", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::VoiceConnection::add_RemoteVoiceAdded(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"add_RemoteVoiceAdded", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::Unity::VoiceConnection::remove_RemoteVoiceAdded(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"remove_RemoteVoiceAdded", {}, {::i2c::type_of<::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::Unity::VoiceLogger* Photon::Voice::Unity::VoiceConnection::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Unity::VoiceLogger*>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_Logger(::Photon::Voice::Unity::VoiceLogger*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_Logger", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceLogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::DebugLevel Photon::Voice::Unity::VoiceConnection::get_LogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_LogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Photon::Voice::LoadBalancingTransport* Photon::Voice::Unity::VoiceConnection::get_Client()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_Client", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::LoadBalancingTransport*>(this, ___internal_method);
}
inline ::Photon::Voice::VoiceClient* Photon::Voice::Unity::VoiceConnection::get_VoiceClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_VoiceClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::VoiceClient*>(this, ___internal_method);
}
inline ::Photon::Realtime::ClientState Photon::Voice::Unity::VoiceConnection::get_ClientState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_ClientState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::ClientState>(this, ___internal_method);
}
inline float_t Photon::Voice::Unity::VoiceConnection::get_FramesReceivedPerSecond()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_FramesReceivedPerSecond", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_FramesReceivedPerSecond(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_FramesReceivedPerSecond", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Voice::Unity::VoiceConnection::get_FramesLostPerSecond()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_FramesLostPerSecond", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_FramesLostPerSecond(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_FramesLostPerSecond", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Voice::Unity::VoiceConnection::get_FramesLostPercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_FramesLostPercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_FramesLostPercent(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_FramesLostPercent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Photon::Voice::Unity::VoiceConnection::get_SpeakerPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_SpeakerPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_SpeakerPrefab(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_SpeakerPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Photon::Voice::Unity::Recorder> Photon::Voice::Unity::VoiceConnection::get_PrimaryRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_PrimaryRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Recorder>>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_PrimaryRecorder(::Photon::Voice::Unity::Recorder*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_PrimaryRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::DebugLevel Photon::Voice::Unity::VoiceConnection::get_GlobalRecordersLogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalRecordersLogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_GlobalRecordersLogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_GlobalRecordersLogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::DebugLevel Photon::Voice::Unity::VoiceConnection::get_GlobalSpeakersLogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalSpeakersLogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_GlobalSpeakersLogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_GlobalSpeakersLogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::Unity::VoiceConnection::get_GlobalPlaybackDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalPlaybackDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_GlobalPlaybackDelay(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_GlobalPlaybackDelay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Photon::Voice::Unity::VoiceConnection::get_BestRegionSummaryInPreferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_BestRegionSummaryInPreferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::set_BestRegionSummaryInPreferences(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"set_BestRegionSummaryInPreferences", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::Unity::VoiceConnection::get_GlobalPlaybackDelayMinSoft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalPlaybackDelayMinSoft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::VoiceConnection::get_GlobalPlaybackDelayMaxSoft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalPlaybackDelayMaxSoft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Photon::Voice::Unity::VoiceConnection::get_GlobalPlaybackDelayMaxHard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"get_GlobalPlaybackDelayMaxHard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::VoiceConnection::ConnectUsingSettings(::Photon::Realtime::AppSettings*  overwriteSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"ConnectUsingSettings", {}, {::i2c::type_of<::Photon::Realtime::AppSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, overwriteSettings);
}
inline void Photon::Voice::Unity::VoiceConnection::InitRecorder(::Photon::Voice::Unity::Recorder*  rec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"InitRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rec);
}
inline void Photon::Voice::Unity::VoiceConnection::SetPlaybackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  gpds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"SetPlaybackDelaySettings", {}, {::i2c::type_of<::Photon::Voice::Unity::PlaybackDelaySettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gpds);
}
inline void Photon::Voice::Unity::VoiceConnection::SetGlobalPlaybackDelaySettings(int32_t  low, int32_t  high, int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"SetGlobalPlaybackDelaySettings", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, low, high, max);
}
inline bool Photon::Voice::Unity::VoiceConnection::TryLateLinkingUsingUserData(::Photon::Voice::Unity::Speaker*  speaker, ::System::Object*  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, speaker, userData);
}
inline void Photon::Voice::Unity::VoiceConnection::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::Dispatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"Dispatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Photon::Voice::Unity::Speaker> Photon::Voice::Unity::VoiceConnection::SimpleSpeakerFactory(int32_t  playerId, uint8_t  voiceId, ::System::Object*  userData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Speaker>>(this, ___internal_method, playerId, voiceId, userData);
}
inline void Photon::Voice::Unity::VoiceConnection::DeleteVoiceOnRemoteVoiceRemove(::Photon::Voice::Unity::Speaker*  speaker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"DeleteVoiceOnRemoteVoiceRemove", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speaker);
}
inline void Photon::Voice::Unity::VoiceConnection::OnRemoteVoiceInfo(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  voiceInfo, ::by_ref<::Photon::Voice::RemoteVoiceOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"OnRemoteVoiceInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::Photon::Voice::VoiceInfo>(), ::i2c::type_of<::by_ref<::Photon::Voice::RemoteVoiceOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelId, playerId, voiceId, voiceInfo, options);
}
inline void Photon::Voice::Unity::VoiceConnection::OnVoiceStateChanged(::Photon::Realtime::ClientState  fromState, ::Photon::Realtime::ClientState  toState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromState, toState);
}
inline void Photon::Voice::Unity::VoiceConnection::CalcStatistics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"CalcStatistics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::CleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"CleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::LinkSpeaker(::Photon::Voice::Unity::Speaker*  speaker, ::Photon::Voice::Unity::RemoteVoiceLink*  remoteVoice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"LinkSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>(), ::i2c::type_of<::Photon::Voice::Unity::RemoteVoiceLink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speaker, remoteVoice);
}
inline void Photon::Voice::Unity::VoiceConnection::ClearRemoteVoicesCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"ClearRemoteVoicesCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::TryInitializePrimaryRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"TryInitializePrimaryRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::AddInitializedRecorder(::Photon::Voice::Unity::Recorder*  rec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"AddInitializedRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rec);
}
inline void Photon::Voice::Unity::VoiceConnection::RemoveInitializedRecorder(::Photon::Voice::Unity::Recorder*  rec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"RemoveInitializedRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rec);
}
inline void Photon::Voice::Unity::VoiceConnection::StartInitializedRecorders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"StartInitializedRecorders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection::StopInitializedRecorders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"StopInitializedRecorders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Unity::VoiceConnection::TryGetFirstVoiceStreamByUserData(::System::Object*  userData, ::by_ref<::Photon::Voice::Unity::RemoteVoiceLink*>  remoteVoiceLink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {"TryGetFirstVoiceStreamByUserData", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::Photon::Voice::Unity::RemoteVoiceLink*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userData, remoteVoiceLink);
}
inline void Photon::Voice::Unity::VoiceConnection::OnOperationResponseReceived(::ExitGames::Client::Photon::OperationResponse*  operationResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationResponse);
}
inline void Photon::Voice::Unity::VoiceConnection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::VoiceConnection* Photon::Voice::Unity::VoiceConnection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::VoiceConnection*>());
}
/// @brief Convert operator to "::Photon::Voice::Unity::ILoggable"
constexpr  Photon::Voice::Unity::VoiceConnection::operator ::Photon::Voice::Unity::ILoggable*() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::Unity::ILoggable"
constexpr ::Photon::Voice::Unity::ILoggable* Photon::Voice::Unity::VoiceConnection::i___Photon__Voice__Unity__ILoggable() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::VoiceConnection::VoiceConnection()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::*)()>(&::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa783558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0._LinkSpeaker_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::*)()>(&::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::_LinkSpeaker_b__0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa783560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0*>(),
                        {"<LinkSpeaker>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::__cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::__cordl_internal_get_speaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::__cordl_internal_get_speaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speaker;
}
constexpr void Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::__cordl_internal_set_speaker(::UnityW<::Photon::Voice::Unity::Speaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speaker = value;
}
inline void Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::_LinkSpeaker_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0*>(),
                        {"<LinkSpeaker>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0* Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0::VoiceConnection___c__DisplayClass104_0()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::*)()>(&::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa783124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0._OnRemoteVoiceInfo_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::*)()>(&::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::_OnRemoteVoiceInfo_b__0)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa78312c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0*>(),
                        {"<OnRemoteVoiceInfo>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::__cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Photon::Voice::Unity::RemoteVoiceLink*& Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::__cordl_internal_get_remoteVoice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoice;
}
constexpr ::Photon::Voice::Unity::RemoteVoiceLink* const& Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::__cordl_internal_get_remoteVoice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteVoice;
}
constexpr void Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::__cordl_internal_set_remoteVoice(::Photon::Voice::Unity::RemoteVoiceLink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteVoice = value;
}
inline void Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::_OnRemoteVoiceInfo_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0*>(),
                        {"<OnRemoteVoiceInfo>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0* Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0::VoiceConnection___c__DisplayClass100_0()   {
}
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa782fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::*)(::Photon::Voice::Unity::RemoteVoiceLink*)>(&::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7830c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::*)(::Photon::Voice::Unity::RemoteVoiceLink*, ::System::AsyncCallback*, ::System::Object*)>(&::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa7830dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::*)(::System::IAsyncResult*)>(&::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa7830fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(),
                    {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::Invoke(::Photon::Voice::Unity::RemoteVoiceLink*  link)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, link);
}
inline ::System::IAsyncResult* Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::BeginInvoke(::Photon::Voice::Unity::RemoteVoiceLink*  link, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, link, callback, object);
}
inline bool Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate* Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate::VoiceConnection_ValidateRemoteLinkDelegate()   {
}
