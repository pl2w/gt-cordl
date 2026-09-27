#pragma once
// IWYU pragma private; include "Photon/Voice/Fusion/VoiceNetworkObject.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Photon/Voice/Fusion/zzzz__VoiceNetworkObject_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "Photon/Voice/Unity/zzzz__ILoggableDependent_def.hpp"
#include "Photon/Voice/Unity/zzzz__ILoggable_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_def.hpp"
#include "Photon/Voice/Unity/zzzz__Speaker_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceLogger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Unity::VoiceLogger* (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_Logger)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa77a718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.set_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::VoiceLogger*)>(&::Photon::Voice::Fusion::VoiceNetworkObject::set_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77a808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_Logger", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceLogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::DebugLevel (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_LogLevel)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa77a810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_LogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.set_LogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)(::ExitGames::Client::Photon::DebugLevel)>(&::Photon::Voice::Fusion::VoiceNetworkObject::set_LogLevel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa778628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IgnoreGlobalLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IgnoreGlobalLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77a848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IgnoreGlobalLogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.set_IgnoreGlobalLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)(bool)>(&::Photon::Voice::Fusion::VoiceNetworkObject::set_IgnoreGlobalLogLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77a850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_IgnoreGlobalLogLevel", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_RecorderInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Recorder> (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_RecorderInUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77a858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_RecorderInUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.set_RecorderInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::Recorder*)>(&::Photon::Voice::Fusion::VoiceNetworkObject::set_RecorderInUse)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa77a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_RecorderInUse", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_SpeakerInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Voice::Unity::Speaker> (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_SpeakerInUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77aef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_SpeakerInUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.set_SpeakerInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::Speaker*)>(&::Photon::Voice::Fusion::VoiceNetworkObject::set_SpeakerInUse)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa77af00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_SpeakerInUse", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IsSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IsSetup)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa77b0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsSetup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IsSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeaker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77b12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsSpeaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.set_IsSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)(bool)>(&::Photon::Voice::Fusion::VoiceNetworkObject::set_IsSpeaker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77b134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_IsSpeaker", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IsSpeaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeaking)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa77b13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IsRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IsRecorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77b154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.set_IsRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)(bool)>(&::Photon::Voice::Fusion::VoiceNetworkObject::set_IsRecorder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa77b15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_IsRecorder", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IsRecording)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa77b164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IsSpeakerLinked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeakerLinked)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa77b18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsSpeakerLinked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IsNetworkObjectReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IsNetworkObjectReady)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa77ae4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsNetworkObjectReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_RequiresSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_RequiresSpeaker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa77b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_RequiresSpeaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_RequiresRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_RequiresRecorder)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa77a9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_RequiresRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IsPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IsPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa77b1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.get_IsLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::get_IsLocal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa77b1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::Setup)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa77b20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.SetupRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorder)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xa77b320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupRecorder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.SetupRecorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::Recorder*)>(&::Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorder)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xa77b6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.SetupSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeaker)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0xa77ba20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupSpeaker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.SetupSpeaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Fusion::VoiceNetworkObject::*)(::Photon::Voice::Unity::Speaker*)>(&::Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeaker)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0xa77bd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.SetupRecorderInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorderInUse)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0xa77aa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupRecorderInUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.SetupSpeakerInUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeakerInUse)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa77865c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupSpeakerInUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.GetUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::GetUserData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa77b9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"GetUserData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.CheckLateLinking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::CheckLateLinking)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0xa77c2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"CheckLateLinking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::Spawned)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa77c694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                    {::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa77c6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)(bool)>(&::Photon::Voice::Fusion::VoiceNetworkObject::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa77c70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                    {::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Fusion::VoiceNetworkObject.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Fusion::VoiceNetworkObject::*)()>(&::Photon::Voice::Fusion::VoiceNetworkObject::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa77c710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                    {::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_voiceConnection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_voiceConnection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceConnection;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceConnection = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_speakerInUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerInUse;
}
constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_speakerInUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speakerInUse;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set_speakerInUse(::UnityW<::Photon::Voice::Unity::Speaker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speakerInUse = value;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_recorderInUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorderInUse;
}
constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_recorderInUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recorderInUse;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set_recorderInUse(::UnityW<::Photon::Voice::Unity::Recorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recorderInUse = value;
}
constexpr ::ExitGames::Client::Photon::DebugLevel& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr ::ExitGames::Client::Photon::DebugLevel const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set_logLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logLevel = value;
}
constexpr ::Photon::Voice::Unity::VoiceLogger*& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr ::Photon::Voice::Unity::VoiceLogger* const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logger;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set_logger(::Photon::Voice::Unity::VoiceLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logger = value;
}
constexpr bool& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_ignoreGlobalLogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreGlobalLogLevel;
}
constexpr bool const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_ignoreGlobalLogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreGlobalLogLevel;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set_ignoreGlobalLogLevel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreGlobalLogLevel = value;
}
constexpr bool& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_AutoCreateRecorderIfNotFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoCreateRecorderIfNotFound;
}
constexpr bool const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_AutoCreateRecorderIfNotFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoCreateRecorderIfNotFound;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set_AutoCreateRecorderIfNotFound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoCreateRecorderIfNotFound = value;
}
constexpr bool& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_UsePrimaryRecorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePrimaryRecorder;
}
constexpr bool const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_UsePrimaryRecorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsePrimaryRecorder;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set_UsePrimaryRecorder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsePrimaryRecorder = value;
}
constexpr bool& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_SetupDebugSpeaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetupDebugSpeaker;
}
constexpr bool const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get_SetupDebugSpeaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetupDebugSpeaker;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set_SetupDebugSpeaker(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetupDebugSpeaker = value;
}
constexpr bool& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get__IsSpeaker_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpeaker_k__BackingField;
}
constexpr bool const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get__IsSpeaker_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpeaker_k__BackingField;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set__IsSpeaker_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpeaker_k__BackingField = value;
}
constexpr bool& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get__IsRecorder_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRecorder_k__BackingField;
}
constexpr bool const& Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_get__IsRecorder_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRecorder_k__BackingField;
}
constexpr void Photon::Voice::Fusion::VoiceNetworkObject::__cordl_internal_set__IsRecorder_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRecorder_k__BackingField = value;
}
inline ::Photon::Voice::Unity::VoiceLogger* Photon::Voice::Fusion::VoiceNetworkObject::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Unity::VoiceLogger*>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::set_Logger(::Photon::Voice::Unity::VoiceLogger*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_Logger", {}, {::i2c::type_of<::Photon::Voice::Unity::VoiceLogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ExitGames::Client::Photon::DebugLevel Photon::Voice::Fusion::VoiceNetworkObject::get_LogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_LogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::DebugLevel>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_LogLevel", {}, {::i2c::type_of<::ExitGames::Client::Photon::DebugLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IgnoreGlobalLogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IgnoreGlobalLogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::set_IgnoreGlobalLogLevel(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_IgnoreGlobalLogLevel", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Photon::Voice::Unity::Recorder> Photon::Voice::Fusion::VoiceNetworkObject::get_RecorderInUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_RecorderInUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Recorder>>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::set_RecorderInUse(::Photon::Voice::Unity::Recorder*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_RecorderInUse", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Photon::Voice::Unity::Speaker> Photon::Voice::Fusion::VoiceNetworkObject::get_SpeakerInUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_SpeakerInUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Voice::Unity::Speaker>>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::set_SpeakerInUse(::Photon::Voice::Unity::Speaker*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_SpeakerInUse", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IsSetup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsSetup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsSpeaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::set_IsSpeaker(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_IsSpeaker", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsSpeaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IsRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::set_IsRecorder(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"set_IsRecorder", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IsRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IsSpeakerLinked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsSpeakerLinked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IsNetworkObjectReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsNetworkObjectReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_RequiresSpeaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_RequiresSpeaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_RequiresRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_RequiresRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IsPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::get_IsLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"get_IsLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupRecorder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorder(::Photon::Voice::Unity::Recorder*  recorder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupRecorder", {}, {::i2c::type_of<::Photon::Voice::Unity::Recorder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, recorder);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeaker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupSpeaker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeaker(::Photon::Voice::Unity::Speaker*  speaker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupSpeaker", {}, {::i2c::type_of<::Photon::Voice::Unity::Speaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, speaker);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::SetupRecorderInUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupRecorderInUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::SetupSpeakerInUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"SetupSpeakerInUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Photon::Voice::Fusion::VoiceNetworkObject::GetUserData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"GetUserData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::CheckLateLinking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {"CheckLateLinking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Photon::Voice::Fusion::VoiceNetworkObject::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Fusion::VoiceNetworkObject*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::Fusion::VoiceNetworkObject* Photon::Voice::Fusion::VoiceNetworkObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::Fusion::VoiceNetworkObject*>());
}
/// @brief Convert operator to "::Photon::Voice::Unity::ILoggableDependent"
constexpr  Photon::Voice::Fusion::VoiceNetworkObject::operator ::Photon::Voice::Unity::ILoggableDependent*() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggableDependent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::Unity::ILoggableDependent"
constexpr ::Photon::Voice::Unity::ILoggableDependent* Photon::Voice::Fusion::VoiceNetworkObject::i___Photon__Voice__Unity__ILoggableDependent() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggableDependent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::Unity::ILoggable"
constexpr  Photon::Voice::Fusion::VoiceNetworkObject::operator ::Photon::Voice::Unity::ILoggable*() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::Unity::ILoggable"
constexpr ::Photon::Voice::Unity::ILoggable* Photon::Voice::Fusion::VoiceNetworkObject::i___Photon__Voice__Unity__ILoggable() noexcept {
return static_cast<::Photon::Voice::Unity::ILoggable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::Fusion::VoiceNetworkObject::VoiceNetworkObject()   {
}
